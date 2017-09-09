#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    const unsigned long int M = 0xFFFFFFFF;
    int t;
    unsigned long int i;
    scanf("%d",&t);
    while(t--){
        scanf("%u",&i);
        printf("%u\n",i^M);
    }
    return 0;
}
