/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *tempHead = head;
    
    if(tempHead == NULL){
        //printf("1");
        Node *temp = (Node *)malloc(sizeof(Node *));
        temp->data = data;
        temp->next = NULL;
        tempHead = temp;
        head = tempHead;
    }else{
        if(position == 0){
            //printf("2");
            Node *temp = (Node *)malloc(sizeof(Node *));
            temp->data = data;
            temp->next = tempHead;
            tempHead = temp;
            head = tempHead;
        }else{
            //printf("3");
            position--;
            while(position--){
                tempHead = tempHead->next;   
            }
            if(tempHead->next == NULL){
                Node *temp = (Node *)malloc(sizeof(Node *));
                temp->data = data;
                temp->next = NULL;
                tempHead->next = temp;
            }else{
                Node *temp = (Node *)malloc(sizeof(Node *));
                temp->data = data;
                temp->next = tempHead->next;
                tempHead->next = temp;
            }
            
        }
    }
    
    return head;
}
