#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


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
    for (i=0; i < size-1; i++){
        if(arr[i]!=arr[i+1]){
            printf("%d ", arr[i]);
        }
    }
    
    printf("%d ",arr[size-1]);
    printf("\n");
}


int main() {

    int n,a,b,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        
        n = n-1;
        
        int arr[n+1];
        
        for(int i = 0; i <= n; i++){
            arr[i] = a*i+b*(n-i);
        }
        
        //n = 5;
        //int arr[6] ={7,2,2,4,8,8};
        
        quickSort(arr,0,n);
        printArray(arr,n+1);
        
    }
    return 0;
}
