#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100000

int main() {

    long long int arr[N];
    long top = -1;
    long long int max[N];
    long n,x,t;
    
    scanf("%ld",&n);
    
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
    
    return 0;
}
