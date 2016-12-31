#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100001
#define M 1000000007

long long int fast_exp(long long int base, long long int exp, long long MOD) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

long long int division(char a[],long long int b){
    char c[N];
    long long int  la;
    long long int  i,k=0,flag=0;
    long long int temp=1,reminder;
    la=strlen(a);

    for(i=0;i<=la;i++){
         a[i] = a[i] - 48;
    }

    temp = a[0];
    reminder = a[0];
    for(i=1;i<=la;i++){
         if(b<=temp){
             c[k++] = temp/b;
             temp = temp % b;
             reminder = temp;
             temp =temp*10 + a[i];
             flag=1;

         }
         else{
             reminder = temp;
             temp =temp*10 + a[i];
             if(flag==1)
                 c[k++] = 0;
         }
    }

    for(i=0;i<k;i++){
         c[i]=c[i]+48;
    }
    c[i]= '\0';

    //printf("Reminder of division:  %lu  ",reminder);
    return reminder;
}


int main() {

    char n[N],m[N];
    long long int d,p,v;
    int t;
    
    scanf("%lld",&t);
    
    while(t--){
        scanf("%s",n);
        scanf("%s",m);
        
        d = division(n,M);
        p = division(m,M-1);
        
        printf("%lld\n",fast_exp(d,p,M));
        
    }
    
    //printf("%s\n",n);
    //printf("%s\n",m);
    
    return 0;
}
