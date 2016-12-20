/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int len = s.length();
    int i = 0;
    node *head = root;
    
    while(i<len){
        head = root;
        while(head->data == '\0' ){
            if(s[i]=='0'){
                head = head->left;
            }else{
                head = head->right;
            }
            i++;
        }
        printf("%c",head->data);
    }
}
