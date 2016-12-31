#include <stdio.h>
#include <stdlib.h>

long long int num[] = {1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111,11111111111,111111111111,1111111111111,11111111111111,111111111111111,1111111111111111};

long long int fastExpo(long long int a , long long int b, long long int m){
    long long int c;
    if(b == 1)
        return a;
    if (b == 0)
        return 1;
    else{
        c = fastExpo(a,b/2,m);
        c = (c*c)%m;
        if(b%2)
            c = (c*a)%m;
        return c;
    }
}

long long int specialFastDiv(long long int b, long long int m){
    long long int c,d,e;
    if(b == 0)
        return 1;
    if(b <= 16)
        return num[b-1]%m;
    else{
        c = specialFastDiv(b/2,m);
        d = fastExpo(10,b/2,m);
        e = (d*c)%m;
        c = (e+c)%m;
        if(b%2){
            d = fastExpo(10,b-1,m);
            c = (c+d)%m;
        }
        return c;
    }
}



int main()
{
    int t;
    long long int b,m;
    scanf("%d",&t);

    while(t--){
    scanf("%lld %lld",&b,&m);
    printf("%lld\n",specialFastDiv(b,m));
    }
    return 0;
}
