#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int e = 100;
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int i = 0;
    while(1){
        int p = (i+k)%n;
        i = p;
        if(c[p]==1){
            e -= 3;
        }else{
            e--;
        }
        if(p == 0){
            break;
        }
    }
    printf("%d",e);
    return 0;
}
