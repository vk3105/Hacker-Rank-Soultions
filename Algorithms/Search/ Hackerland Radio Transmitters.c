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

int partition (int arr[], int low, int high)
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

void quickSort(int arr[], int low, int high)
{
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *x = malloc(sizeof(int) * n);
    for(int x_i = 0; x_i < n; x_i++){
       scanf("%d",&x[x_i]);
    }
    
    quickSort(x,0,n-1);
    
    //printArray(x,n);
    
    int count = 0;
    
    int i = 0;
    
    while(i < n){
        int j = i;
        
        //printf("%d %d\n",startPosValue,endPosValue);
        
        while(x[i]+k >= x[j] && j < n){
            j++;
        }
        i = j-1;
        
        while(x[i]+k >= x[j] && j < n){
            j++;
        }
        i = j;
        count++;
    }
    
    printf("%d",count);
    
    return 0;
}
