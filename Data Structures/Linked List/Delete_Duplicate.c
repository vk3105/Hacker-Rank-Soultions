/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *tempHead = head;
    Node *curr, *prev;
    
    if(head == NULL){
        return NULL;
    }
    
    curr = head;
    tempHead = curr;
    
    while(head->next!=NULL){
        if(head->data == head->next->data){
            head = head->next;
        }else{
            curr->next = head->next;
            curr= curr->next;
            head = head->next;
        }
    }
    
    if(curr->data == head->data){
        curr->next = NULL;
    }
       
    
    return tempHead;
}
