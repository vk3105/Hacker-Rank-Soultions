#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ALPHASET 26

struct trienode{
    int count;
    int isLeaf;// 1 for yes 0 for no
    struct trienode *childs[ALPHASET];
};

struct trienode* getNode(){
    struct trienode *node = (struct trienode *)malloc(sizeof(struct trienode));
    if(node){
        int i;
        node->count = 0;
        node->isLeaf = 0;
        for(i = 0; i < ALPHASET; i++){
            node->childs[i] = NULL;
        }
    }else{
        printf("FAIL");
    }
    return node;
}

int addString(struct trienode *root,char *str){

    struct trienode *head = root;
    int len = strlen(str);
    int i;
    int flag1 = 0;// to check if we reached any leaf node during our inertion. If yes set to 1 else set to 0
    int flag2 = 1;// to check if the new string is different or not. If different set to 0 else set to 1

    for(i = 0; i < len; i++){
        int idx = str[i]-'a';
        if(head->childs[idx]==NULL){
            head->childs[idx] = getNode();
            flag2 = 0;
        }
        head->childs[idx]->count++;
        head = head->childs[idx];
        if(head->isLeaf){
            flag1 = 1;
        }
    }
    head->isLeaf = 1;
    //printf("%d %d\n",flag1,flag2);
    return (flag1||flag2);
}


int main() {

    struct trienode *root = getNode();

    int n,flag;

    scanf("%d",&n);

    while(n--){
        char str[61];
        
        scanf("%s",str);
        
        flag = addString(root,str);
        
        if(flag){
            printf("BAD SET\n");
            printf("%s\n",str);
            break;
        }
    }

    if(!flag){
        printf("GOOD SET\n");
    }
    
    return 0;
}
