#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int lsb(unsigned long long int n){
    unsigned long long int x = (unsigned long long int)(log ((double)n) / log (2));
    return pow(2,x);
}

unsigned long long int isPowerOfTwo(unsigned long long int n){
    return n && (!(n&(n-1)));
}

int whoIsWinner(unsigned long long int n){
    int i = 0;
    while(n!=1){
        if(isPowerOfTwo(n)){
           n /= 2; 
        }else{
            n -= lsb(n); 
        }
        i++;
        //printf("\n n = %u, i = %d\n",n,i);
    }
    return (i&1);
}

int main() {

    int t;
    unsigned long long int n;
    scanf("%d",&t);
    while(t--){
        scanf("%llu",&n);
        
        if(!whoIsWinner(n)){
            printf("Richard\n");
        }else{
            printf("Louise\n");
        }
        
    }
    return 0;
}
