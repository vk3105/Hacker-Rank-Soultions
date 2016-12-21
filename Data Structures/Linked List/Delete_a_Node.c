/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *tempHead = head;
    
    if(head == NULL){
        return NULL;
    }
    
    if(position == 0){
        head = head->next;
        free(tempHead);
    }else{
        position--;
        while(position--){
            tempHead = tempHead->next;
        }
        tempHead->next = tempHead->next->next;
    }
    
    return head;
}
