#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long int n,r;
    scanf("%ld %ld",&n,&r);
    
    long int *arr = malloc(sizeof(long int)*n);
    
    for(int i = 0; i < n; i++){
        scanf("%ld",&arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        printf("%ld ",arr[(i+r)%n]);
    }
    
    return 0;
}
