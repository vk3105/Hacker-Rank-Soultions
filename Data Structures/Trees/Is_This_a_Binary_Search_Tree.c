/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

int checkBSTUtil(struct Node* root, int min, int max) 
{ 
  if (root==NULL) 
     return 1;
  if (root->data < min || root->data > max) 
     return 0; 
  return checkBSTUtil(root->left, min, root->data-1) && checkBSTUtil(root->right, root->data+1, max);  
} 


   bool checkBST(Node* root) {
       int INT_MIN = -2147483648;
       int INT_MAX = 2147483647;
       return(checkBSTUtil(root, INT_MIN, INT_MAX)); 
   }
