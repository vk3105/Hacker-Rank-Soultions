#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    int maxNumIndex,maxNumCount;
    
    scanf("%d",&n);
    
    int *arr = (int *)malloc(sizeof(int)*100);
    
    memset(arr,0,100);
    
    maxNumIndex = -1;
    maxNumCount = -1;
    
    for(i = 0; i < n; i++){
        int p;
        scanf("%d",&p);
        arr[p-1]++;
        
        if(arr[p-1]>maxNumCount){
            maxNumCount = arr[p-1];
        }
    }
    
    printf("%d",n-maxNumCount);
    
    return 0;
}
