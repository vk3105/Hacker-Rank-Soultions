#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int logtwo(double x){
    return (log(x)/log(2));
}

int main(){
    long long int t; 
    long long int n;
    long long int nthTermSum,nthTermStarting;
    scanf("%lld",&t);
    //Find GP and sum. From there find the lowest sum that is equal to nth term
    
    n = logtwo((((t/(double)3))+1));
    
    nthTermStarting = 3*pow(2,n);
    
    nthTermSum = 3*(pow(2,n)-1);
    
    if(nthTermSum == t){
        printf("1");
    }else{
        long long nPlusOnethTermSum = 3*(pow(2,(n+1))-1);
        printf("%lld\n",nPlusOnethTermSum-t+1);
    }
    return 0;
}
