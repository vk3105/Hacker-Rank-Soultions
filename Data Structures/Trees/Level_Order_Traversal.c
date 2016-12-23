
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

int getHeight(node* root){
    if(root==NULL||(root->left == NULL && root->right == NULL)){
        return 0;
    }else{
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        return (1+(leftHeight>rightHeight?leftHeight:rightHeight));
    }
}

void LevelOrderUtil(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 0)
        printf("%d ", root->data);
    else if (level > 0)
    {
        LevelOrderUtil(root->left, level-1);
        LevelOrderUtil(root->right, level-1);
    }
}

void LevelOrder(node * root)
{
    int i;
    int h = getHeight(root);
    
    //printf("%d ",root->data);
    
    for(i = 0; i <= h; i++){
        LevelOrderUtil(root,i);     
    }
  
}
