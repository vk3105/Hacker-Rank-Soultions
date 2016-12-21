/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
    if(head==NULL){
        return 0;
    }
    int len = 0;
    
    Node *tempHead = head;
    
    while(tempHead){
        len++;
        tempHead = tempHead->next;
    }
    
    tempHead = head;
    
    while(len-positionFromTail-1>0){
        tempHead = tempHead->next;
        len--;
    }
    return tempHead->data;
}
