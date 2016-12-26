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

void addString(struct trienode *root,char *str){

    struct trienode *head = root;
    int len = strlen(str);
    int i;

    for(i = 0; i < len; i++){
        int idx = str[i]-'a';
        if(head->childs[idx]==NULL){
            head->childs[idx] = getNode();
        }
        head->childs[idx]->count++;
        //printf("ADD : %c %d \n",idx+'a',head->childs[idx]->count);
        head = head->childs[idx];
    }
    head->isLeaf = 1;
}


int searchString(struct trienode *root,char *str){

    struct trienode *head = root;
    int len = strlen(str);
    int i;
    int count;

    for(i = 0; i < len; i++){
        int idx = str[i]-'a';
        //printf("%c\n",str[i]);
        if(head->childs[idx]==NULL){
            //printf("SEARCH BREAK : %c\n",idx+'a');
            count = 0;
            break;
        }else{
            head = head->childs[idx];
            count = head->count;
            //printf("SEARCH : %c %d \n",idx+'a',head->count);
        }
    }
    return count;
}

int main() {

    struct trienode *root = getNode();

    int n;

    scanf("%d",&n);

    while(n--){
        char type[22];
        char str[22];

        scanf("%s",type);
        scanf("%s",str);

        if(strcmp("add",type)==0){
            addString(root,str);
        }else{
            int count = searchString(root,str);
            printf("%d\n",count);
        }
    }

    return 0;
}
