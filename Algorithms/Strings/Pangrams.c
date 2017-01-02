#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define L 1000

char a[L];
int b[26];

int main() {

    int t;
    int i,j,l,flag;
    
    flag = 1;
    
    fgets (a, L, stdin);
    l = strlen(a);
    
    for(i = 0; i < l; i++){
        //printf("%c\n",a[i]);
        if(a[i] >= 'a' && a[i] <= 'z')
            b[a[i]-'a'] = 1;
        if(a[i] >= 'A' && a[i] <= 'Z')
            b[a[i]-'A'] = 1;
    }
    
    for(i = 0; i < 26 ; i++){
        
        if(b[i] == 0){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("pangram\n");
    }else{
        printf("not pangram\n");
    }
    
    return 0;
}
