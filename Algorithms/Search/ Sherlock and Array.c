#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isArrayBalanced(int *arr, int n){
    int i = -1;
    int j = n;
    int sumL = 0;
    int sumR = 0;
    
    while(i < j){
        if(sumL > sumR){
            j--;
            sumR += arr[j];
        }else if(sumR > sumL){
            i++;
            sumL += arr[i];
        }else{
            i++;
            j--;
            sumL += arr[i];
            sumR += arr[j];
        }
    }
    
    if(sumL==sumR){
        return 1;
    }else{
        return 0;
    }
}

int main() {

    int t,n,i,j,k;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        int *arr = (int *)malloc(sizeof(int)*n);
        
        for(i= 0; i < n ; i++){
            scanf("%d",&arr[i]);
        }
                
        if(isArrayBalanced(arr,n)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        free(arr);
        
    }
    
    return 0;
}
