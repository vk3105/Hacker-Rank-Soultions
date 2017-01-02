#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int i = 0; 
    int len = strlen(s);
    int count = 0;
    while(i<len){
        if((i%3) == 0 && s[i]!='S'){
            count++;
        }else if((i%3) == 1 && s[i]!='O'){
            count++;
        }else if((i%3) == 2 && s[i]!='S'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
