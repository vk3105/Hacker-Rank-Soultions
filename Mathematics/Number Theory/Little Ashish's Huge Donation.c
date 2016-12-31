#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define CONST 0.333333333333

long long int cubrt(long long int n){
    long long int val;
    val = pow(3*n, CONST);
    
    //printf("val = %lld \n",val);
    
    return val;
}

long long int successfulDonation(long long int v, long long int n){
    int flag = 0;
    long long int val;
    
    val = (v*(v+1)*(2*v+1))/6;
    
    if(val <= n)
        return v;
    else
        return v-1;
}

int main() {

    long long int n,v;
    int t;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%lld",&n);
        
        v = cubrt(n);
        
        
        printf("%lld\n",successfulDonation(v,n));
        
    }
    
    return 0;
}
