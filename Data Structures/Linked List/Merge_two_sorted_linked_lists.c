/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    struct Node* head = NULL;

      if (headA == NULL) 
        return(headB);
      else if (headB==NULL) 
        return(headA);
  
      if (headA->data <= headB->data) 
      {
         head = headA;
         head->next = MergeLists(headA->next, headB);
      }
      else
      {
         head = headB;
         head->next = MergeLists(headA, headB->next);
      }
      return(head);
}
