/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void left_view(node *root){
    if(root == NULL){
        return;
    }else{
        left_view(root->left);
        printf("%d ",root->data);
    }
}

void right_view(node *root){
    if(root == NULL){
        return;
    }else{
        printf("%d ",root->data);
        right_view(root->right);
    }    
}

void top_view(node * root)
{
    if(root == NULL)
        return;
    
    left_view(root->left);
    printf("%d ",root->data);
    right_view(root->right);
  
}
