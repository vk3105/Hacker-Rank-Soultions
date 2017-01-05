#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int b; 
        long long int w; 
        scanf("%lld %lld",&b,&w);
        long long int x; 
        long long int y; 
        long long int z; 
        scanf("%lld %lld %lld",&x,&y,&z);
        
        if(y+z < x){
            printf("%lld\n",(w*y+b*(y+z)));
        }else if(x+z < y){
            printf("%lld\n",(w*(x+z)+b*x));
        }else{
            printf("%lld\n",(w*y+b*x));
        }
        
    }
    return 0;
}
