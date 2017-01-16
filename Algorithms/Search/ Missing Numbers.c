#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    int n,m,k,i,j;
    int firstInputNum;
    int minA = INT_MAX;
    int minB = INT_MAX;
    int mid = 100;
    
    int *listA = (int *)malloc(sizeof(int)*201);
    int *listB = (int *)malloc(sizeof(int)*201);
    
    memset(listA,0,201);
    memset(listB,0,201);
    
    scanf("%d",&n);
    
    
    scanf("%d",&firstInputNum);
    listA[mid]++;
    
    for(int i = 1; i < n; i++){
        scanf("%d",&k);
        int pos = k - firstInputNum + mid;
        listA[pos]++;
        if(minA > pos){
            minA = pos;
        }
    }
    
    scanf("%d",&m);
        
    for(int i = 0; i < m; i++){
        scanf("%d",&k);
        int pos = k - firstInputNum + mid;
        listB[pos]++;
        if(minB > pos){
            minB = pos;
        }
    }
    
    int min = minA < minB ? minA : minB;
    
    for(i = min; i < 201; i++){
        if(listB[i] - listA[i] > 0 ){
            printf("%d ",i - mid + firstInputNum);  
        }
    }
    
    
    return 0;
}
