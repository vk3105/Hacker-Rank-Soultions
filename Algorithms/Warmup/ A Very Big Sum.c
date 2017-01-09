#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a,s = 0;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&a);
        s+=a;
    }
    printf("%lld\n",s);
    return 0;
}
