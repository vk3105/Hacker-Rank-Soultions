#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100000

int main() {

    long top = -1;
    long n,x,t;
    
    scanf("%ld",&n);
    
    long long int *arr = (long long int*)malloc(sizeof(long long int)*n);
    long long int *max = (long long int*)malloc(sizeof(long long int)*n);
    
    while(n--){
        scanf("%ld",&t);
        if(t == 1){
            scanf("%ld",&x);
            top++;
            arr[top] = x;
            if(top == 0){
                max[top] = x;
            }else{
                if(x>max[top-1]){
                    max[top] = x;
                }else{
                    max[top] = max[top-1];
                }
            }
        }else if(t == 2){
            top--;
        }else{
            printf("%lld\n",max[top]);
        }
    }
    
    free(arr);
    free(max);
    
    return 0;
}
