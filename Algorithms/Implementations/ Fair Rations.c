#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    
    int count = 0;
    int flag = 0;
    
    int *B = malloc(sizeof(int) * N);
    
    for(int B_i = 0; B_i < N; B_i++){
        scanf("%d",&B[B_i]);
        if ( (flag + B[B_i])%2 ) {
            count += 2;
            flag = 1;
        } else{
            flag = 0;
        }
    }
    
    if(flag){
        printf("NO");
    }else{
        printf("%d",count);
    }
    
    return 0;
}
