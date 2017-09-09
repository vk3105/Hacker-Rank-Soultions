#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int countZeros(long n){
    int count = 0;
    while(n){
        if(!(n&1)){
            count++;
        }
        n = n>>1;
    }
    return count;
}

int main(){
    long n; 
    scanf("%ld",&n);
    printf("%ld",(long)pow(2,countZeros(n)));
    return 0;
}
