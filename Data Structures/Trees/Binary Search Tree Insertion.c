/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node *head = root;
    
    if(root==NULL){
        node *temp = (node *)malloc(sizeof(node));
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
    }else{
        while(head->left!=NULL || head->right!=NULL){
            if(head->left!=NULL && head->data > value){
                head = head->left;
            }
            if(head->right!=NULL && head->data < value){
                head = head->right;
            }        
        }

        if(head->left==NULL){
            node *temp = (node *)malloc(sizeof(node));
            temp->data = value;
            temp->left = NULL;
            temp->right = NULL;
            head->left = temp;
        }else{
            node *temp = (node *)malloc(sizeof(node));
            temp->data = value;
            temp->left = NULL;
            temp->right = NULL;
            head->right = temp;
        }
    }
   return root;
}
