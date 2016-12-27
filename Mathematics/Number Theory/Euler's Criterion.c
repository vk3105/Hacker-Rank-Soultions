#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



long long int fast_exp(long long int base, long long int exp, long long MOD) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

int main() {
    int t;
    
    long long int p,a,m,v;
    
    scanf("%d",&t);
    
    while(t--){
        
        scanf("%lld %lld",&a,&m);
        
        p = (m-1)/2;
        
        v = fast_exp(a,p,m);
        
        if(v==1 || v == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }
    
    return 0;
}
