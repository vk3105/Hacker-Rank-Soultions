
void postOrder(node *root) {
    
    if(root==NULL){
        return;
    }
    if(root->left!=NULL){
        postOrder(root->left);
    }
    if(root->right!=NULL){
        postOrder(root->right);
    }
    printf("%d ",root->data);
}
