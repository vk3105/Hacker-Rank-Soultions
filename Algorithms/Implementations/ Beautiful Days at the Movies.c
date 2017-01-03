#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long reverse(long x){
    int num = 0; 
    while(x){
        int rem = x%10;
        x = x/10;
        num = num*10+rem;
    }
    return num;
}

int main() {

    long i,j,k;
    long count = 0;
    scanf("%ld %ld %ld",&i,&j,&k);
    for(long l = i; l <= j ;l++){
        long diff = abs(l-reverse(l));
        if(diff%k==0){
            count++;
        }
    }
    printf("%ld",count);
    return 0;
}
