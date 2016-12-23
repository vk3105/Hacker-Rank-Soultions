/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    struct Node *temp = NULL;  
    struct Node *curr = head;
    
    while (curr !=  NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;              
        curr = curr->prev;
    }      

    if(temp != NULL ){
        head = temp->prev;
    }
    
    return head;
}
