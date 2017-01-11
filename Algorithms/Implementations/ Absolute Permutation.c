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
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        
        if(k == 0){
            for(int i = 0; i < n; i++){
                printf("%d ",i+1);
            }
            printf("\n");
        }else{
            if(n==1){
                printf("1\n");
            }else{
                if(k==1 && n%2 == 0){
                    
                    for(int i = 0; i < n/2; i++){
                        printf("%d %d ",2*i+2,2*i+1);
                    }
                    printf("\n");
                }else if(n%(2*k) == 0){
                    int partitions = n/(2*k);
                    
                    for(int i = 0 ; i < partitions; i++){
                        int start = 2*k*i;
                        int end = 2*k*(i+1);
                        int mid = start+k;
                        
                        for(int j = mid ; j < end; j++){
                            printf("%d ",j+1);
                        }
                        
                        for(int j = start ; j < mid; j++){
                            printf("%d ",j+1);
                        }
                    }
                    
                    printf("\n");
                }else{
                    printf("-1\n");
                }
            }
        }
        
    }
    return 0;
}
