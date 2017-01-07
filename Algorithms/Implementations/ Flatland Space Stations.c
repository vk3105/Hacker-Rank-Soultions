#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
 
    for (int j = low; j <= high- 1; j++){
        if (arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int *arr, int low, int high)
{
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int *arr, int size)
{
    int i;
    for (i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *c = malloc(sizeof(int) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    quickSort(c,0,m-1);
    //printArray(c,m);
    
    int max = 0;
    
    for(int i = 0; i < m-1; i++){
        int d = c[i+1]-c[i];
        if(d/2 > max){
            max = d/2;
        }
    }
    
    //corner cases
    if(c[0]!=0){
        int d = c[0]-0;
        if(d > max){
            max = d;
        }
    }
    
    if(c[m-1]!=n-1){
        int d = n-1-c[m-1];
        if(d > max){
            max = d;
        }
    }
    
    printf("%d",max);
    return 0;
}
