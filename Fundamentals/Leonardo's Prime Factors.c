#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 25

int PRIMES[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main() {

    int n;
    
    scanf("%d",&n);

    while(n--){
        long long int prod = 1;
        long long int num;
        int j = 0;
        int i;
        
        scanf("%lld",&num);
        
        for(i = 0; i < 15; i++){// After 15 there will be overflow
            prod *= PRIMES[i];
            if(prod <= num ){
                j++;
            }else{
                break;   
            }
        }
        printf("%d\n",j);
    }
    
    return 0;
}
