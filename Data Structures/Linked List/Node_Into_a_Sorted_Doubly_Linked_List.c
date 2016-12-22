/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method.
    if(head == NULL){
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
    }else{
        if(head->data > data){
            struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
            temp->data = data;
            temp->next = NULL;
            temp->prev = NULL;

            temp->next = head;
            head->prev = temp;
            head = temp;
        }else{
            struct Node *tempHead = head;
            
            while(tempHead->data < data && tempHead->next != NULL){
                tempHead = tempHead->next;
            }
            if(tempHead->next == NULL && tempHead->data < data){
                struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
                temp->data = data;
                temp->next = NULL;
                temp->prev = NULL;
                
                temp->prev = tempHead;
                tempHead->next = temp;
            }else{
                struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
                temp->data = data;
                temp->next = NULL;
                temp->prev = NULL;
                
                temp->prev = tempHead->prev;
                temp->next = tempHead;
                tempHead->prev->next = temp;
                tempHead->prev =temp;
            }
            
        }
    } 
   return head;
}
