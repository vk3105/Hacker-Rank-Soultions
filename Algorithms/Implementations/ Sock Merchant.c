#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int c[101];

int main(){
    int n; 
    scanf("%d",&n);
   
    int result = 0;
    for(int c_i = 0; c_i < n; c_i++){
       int k;
       scanf("%d",&k);
       c[k]++;
    }
    for(int c_i = 0; c_i < 101; c_i++){
        if(c[c_i]!=0){
            result += c[c_i]/2;
        }
    }
    printf("%d",result);
    return 0;
}
