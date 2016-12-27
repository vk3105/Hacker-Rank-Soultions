#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int fast_exp(long long int base, long long int exp, long long MOD) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) 
           res=(res*base)%MOD;
        
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

long long int mul(long long int base, long long int exp) {
    long long int res=1;
    while(exp--) {
       res *= base;
    }
    return res;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int a,b,x,t,v,m,q;
    scanf("%lld",&t);
    
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&x);
        if(b>0){
            m = fast_exp(a,b,x);
            v = mul(a,b);
            if(m <= x/2)
                v = v-m;
            else
                v = v+x-m;
        }else if (b == 0){
            v = 0;
        }else {
            if(a==1)
                v = 1;
            else
                v = 0;
        }
        printf("%lld\n",v);
    }
    
    return 0;
}
