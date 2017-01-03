#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n,m,s,t;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld %ld %ld",&n,&m,&s);
        long result = (m+s-1)%n;
        if(result!=0){
            printf("%ld\n",result);
        }else{
            printf("%ld\n",n);
        }
    }
    return 0;
}
