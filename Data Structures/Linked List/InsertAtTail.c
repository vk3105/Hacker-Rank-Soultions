/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Insert(Node *head,int data)
{
    Node *tempHead = head;
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->next = NULL;
    temp->data = data;
    
  // Complete this method
    if(head == NULL)
    {
        head = temp; 
    }else{
        while(tempHead->next != NULL)
            tempHead = tempHead->next;

        tempHead->next = temp;
    }
    return head;
}
