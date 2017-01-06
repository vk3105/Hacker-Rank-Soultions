#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    
    int min = INT_MAX;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(A[i]==A[j]){
                int dist = abs(j-i);
                if(dist < min){
                    min = dist;
                }
            }
        }
    }
    
    if(min == INT_MAX){
        min = -1;
    }
    
    printf("%d",min);
    return 0;
}
