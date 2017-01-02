#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* B = (char *)malloc(10240 * sizeof(char));
    scanf("%s",B);
    
    int len = strlen(B);
    int count = 0;
    int i = 0;
    
    while(i<=n-3){
        if(B[i]=='0' && B[i+1]=='1' && B[i+2]=='0'){
            count++;
            i = i+3;
        }else{
            i++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
