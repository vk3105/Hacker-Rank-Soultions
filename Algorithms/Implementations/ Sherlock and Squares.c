#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t;
    long long a,b,a1,b1;
    
    scanf("%d",&t);

    while(t--){
        scanf("%lld %lld",&a,&b);
        a1 = sqrt(a);
        if(a1*a1 == a)
            a1--;
        b1 = sqrt(b);
        printf("%lld\n",(b1-a1));
    }
    
    return 0;
}
