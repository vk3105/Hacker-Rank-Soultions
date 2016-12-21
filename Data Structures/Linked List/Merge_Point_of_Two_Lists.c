/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/

int lengthOfList(Node *head){
    Node *temp = head;
    int len = 0;
    while(temp){
        temp = temp->next;
        len++;
    }
    return len;
}


int FindMergeNode(Node *headA, Node *headB)
{
    int lenA,lenB;
    int i,diff,val;
    
    lenA = lengthOfList(headA);
    lenB = lengthOfList(headB);
    
    if(lenA>lenB){
        for(i = 0; i < lenA-lenB; i++){
            headA = headA->next;
        }
    }else{
        for(i = 0; i < lenB-lenA; i++){
            headB = headB->next;
        }
    }
    
    val = 0;
    
    while(headA && headB){
        if(headA == headB){
            val = headA->data;
            break;
        } else{
            headA = headA->next;
            headB = headB->next;
        }
    }
    return val;
}
