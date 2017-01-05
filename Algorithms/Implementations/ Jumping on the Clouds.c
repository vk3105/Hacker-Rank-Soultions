#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,n,count; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    count = 0;
    i = 0;
    
    
    while(i<=n-2){
       if(c[i+1]==0 && c[i+2]==0 || c[i+1]==1 && c[i+2]==0){
           count++;
           i = i+2;
       }else{
           count++;
           i = i+1;
       }
    }
    printf("%d",count);
    
    return 0;
}
