
void inOrder(node *root) {
    
    if(root==NULL){
        return;
    }
    if(root->left!=NULL){
        inOrder(root->left);
    }
    
    printf("%d ",root->data);
    
    if(root->right!=NULL){
        inOrder(root->right);
    }
}
