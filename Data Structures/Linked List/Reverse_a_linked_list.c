/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    Node *tempHead = head;
    Node *prev,*curr,*temp;
    
    if(head == NULL){
        return NULL;
    }
    
    curr = head;
    prev = NULL;
    
    while(curr != NULL){
        temp = curr;
        curr = curr->next;
        temp->next = prev;
        prev = temp;
    }
    head = prev;
    return head;
}
