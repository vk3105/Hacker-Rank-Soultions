#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};



struct node* buildTree(){
    int n,i,j,k;

    scanf("%d",&n);

    struct node *arr[n];

    struct node *root;

    j = 0;
    k = 0;

    arr[j] = (struct node *)malloc(sizeof(struct node));
    arr[j]->data = 1;
    arr[j]->left = NULL;
    arr[j]->right = NULL;

    root = arr[j];

    for(i = 0; i < n; i++){
        int a,b;

        scanf("%d %d",&a,&b);
        if(a!=-1){
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            temp->data = a;
            temp->left = NULL;
            temp->right = NULL;
            
            arr[k]->left = temp;
            j++;
            arr[j] = temp;
        }
        if(b!=-1){
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            temp->data = b;
            temp->left = NULL;
            temp->right = NULL;
            
            arr[k]->right = temp;
            j++;
            arr[j] = temp;
        }
        k++;
    }

    return root;
}

void inOrderTraversal(struct node *root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ",root->data);
    inOrderTraversal(root->right);
}

void swapNodesUtil(struct node* root, int level, int swapLevel){

    if(root==NULL||(root->left == NULL && root->right == NULL)){
        return;
    }

    if((level+1)%swapLevel==0){
        struct node *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    swapNodesUtil(root->left,level+1,swapLevel);
    swapNodesUtil(root->right,level+1,swapLevel);
    
}

void swapNodes(struct node *root){

    int t,a;

    scanf("%d",&t);

    while(t--){
        int i;
        scanf("%d",&a);
        swapNodesUtil(root,0,a);
        inOrderTraversal(root);
        printf("\n");
    }
}

int main() {

    struct node *root;
    int height;

    root = buildTree();

    swapNodes(root);

    return 0;
}
