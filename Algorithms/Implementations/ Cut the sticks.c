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


void cutSticks(int arr[], int size){
    int flag = 1;
    int i = 0;
    printf("%d\n",size);
    while(i < size-1){
        while(arr[i]==arr[i+1]){
            i++;
        }
        i++; 
        if(size-i!=0){
            printf("%d\n",size-i);
        }
    }
}

int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    quickSort(arr,0,n-1);
    //printArray(arr,n);
    cutSticks(arr,n);
    
    return 0;
}
