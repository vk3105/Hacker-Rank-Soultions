#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int arr[25];

long long int power(long long int b, long long int e){
    long long int a = 1;
    long long int i;
    for(i = 0; i < e; i++){
        a *=5;
    }
    return a;
}

long long int calc(long long int n){
    long long int a;
    long long int b = 0;

    a = power(5,n);
    while(a){
        a = a/5;
        b += a;
    }
    return b;
}

void fillUp(){
    long long int i;
    for(i = 0; i < 25; i++){
        arr[i] = calc(i);
    }
}

int findPosition(long long int n){
    long long int i = 0;
    while(n >= arr[i])
        i++;
    if(i==1)
        return 1;
    else
        return i-1;
}

long long int findNumber(long long int n){
    long long int a,i;
    long long v = 0;
    while(n > 0){
        i = findPosition(n);
        a = arr[i];
        v += power(5,i);
        n -= a;
    }
    return v;
}

int main() {
    long long int t,a,b,c,n;

    fillUp();

    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        a = findNumber(n);
        printf("%lld\n",a);
    }
    return 0;
}
