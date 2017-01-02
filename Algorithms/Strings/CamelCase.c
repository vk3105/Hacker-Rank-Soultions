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
    int len = strlen(s);
    int i = 0;
    int count = 0;
    while(i < len){
        if(s[i]>='A'&&s[i]<='Z'){
            count++;
        }
        i++;
    }
    printf("%d",count+1);
    return 0;
}
