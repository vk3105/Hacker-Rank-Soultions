
void preOrder(node *root) {
    
    if(root == NULL){
        return;
    }else{
        printf("%d ",root->data);
        if(root->left!=NULL){
            preOrder(root->left);
        }
        if(root->right!=NULL){
            preOrder(root->right);
        }
    }
}
