#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,k,c;
    scanf("%d",&n);
    
    k = 5;
    
    for(i = 1; i <= n; i++){
        j = floor(k/(double)2);
        c += j;
        k = 3*j;
    }
    
    printf("%d",c);
      
    return 0;
}
