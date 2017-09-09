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

int length(int n){
    if(n/10 == 0){
        return 1;
    }else if(n/100 == 0){
        return 2;
    }else if(n/1000 == 0){
        return 3;
    }else if(n/10000 == 0){
        return 4;
    }else{
        return 0;
    }
}

long long int gcd(long long int num1,long long int num2){
    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}

long long int recurFunct(long long int a, long long int n, long long m, long long l){
    long long int p,q,r,s,t;
    if(n == 1){
        return a%m;
    }else{
        if(n%2 == 1){
            p = (n-1);
            p = fast_exp(10,p*l,m);
            p = (p*a)%m; //(i)

            q = (n-1)/2;

            r = fast_exp(10,q*l,m);
            r = (r+1)%m;

            s = recurFunct(a,q,m,l);

            t = (r*s)%m; // (ii)

            t = (t + p)%m;

            return t;
        }else{

            p = n/2;
            q = fast_exp(10,p*l,m);
            
            q = (q+1)%m;

            s = recurFunct(a,p,m,l);

            t = (s*q)%m;

            return t;
        }
    }
}

int main() {

    long long int t,a,n,m,p,q,r,s,l;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&a,&n,&m);
        l = length(a);
        printf("%lld\n",recurFunct(a,n,m,l));
    }
    return 0;
}

