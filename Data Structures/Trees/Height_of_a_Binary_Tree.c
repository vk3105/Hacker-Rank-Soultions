int getHeight(Node* root){
    if(root==NULL||(root->left == NULL && root->right == NULL)){
        return 0;
    }else{
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        return (1+(leftHeight>rightHeight?leftHeight:rightHeight));
    }
}
