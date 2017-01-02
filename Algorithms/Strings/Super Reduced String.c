#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s = (char *)malloc(sizeof(char)*128);
    scanf("%s",s);
    int len = strlen(s);
    
    char *stack = (char *)malloc(sizeof(char)*128);
    
    int top=-1;
    
    for(int i= 0 ; i < len; i++){
        if(top==-1){
            top++;
            stack[top] = s[i];
        }else{
            if(stack[top]==s[i]){
                top--;
            }else{
                top++;
                stack[top]=s[i];
            }
        }
    }
    
    if(top==-1){
        printf("Empty String");
    }
    
    for(int i = 0; i <= top; i++){
        printf("%c",stack[i]);
    }
    
    return 0;
}
