#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define M 10000

int gcd(int num1,int num2){
    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}

int main() {

    int t,n,i,g;
    long long int val;
    int a[M];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        for(i = 0; i <= n; i++){
            if(i == 0){
                printf("%d ",a[i]);
            }else if(i == n){
                printf("%d\n",a[i-1]);
            }else{
                g = gcd(a[i],a[i-1]);
                val = a[i]*a[i-1];
                printf("%lld ",val/g);
            }
        }
    }
    return 0;
}
