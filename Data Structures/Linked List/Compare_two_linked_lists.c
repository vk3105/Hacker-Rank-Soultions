/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    int result = 1;
     
    while(headA!=NULL && headB!=NULL){        
        if(headA->data == headB->data){
            headA = headA->next;
            headB = headB->next;
        }else{
            result = 0;
            break;
        }
    }
    
    if((headA == NULL && headB != NULL) || (headA != NULL && headB == NULL)){
        result = 0;
    }
    
    return result;
}
