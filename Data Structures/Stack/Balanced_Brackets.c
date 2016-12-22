#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int isMatchingBraces(char *s){
    int len = strlen(s);
    int i;
    int j = -1;
    
    char *stack = (char *)malloc(sizeof(char)*len);
    
    for(i = 0; i < len ; i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            j++;
            stack[j] = s[i];
        }else{
            if(s[i]=='}' && stack[j]=='{'){
                j--;
            }else if(s[i]==')' && stack[j]=='('){
                j--;
            }else if(s[i]==']' && stack[j]=='['){
                j--;
            }else{
                j = 1;
                break;
            }
        }
    }
    if(j==-1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
        if(isMatchingBraces(s)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
