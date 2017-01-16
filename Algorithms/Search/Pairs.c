#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/* Head ends here */


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

int pairs(int a_size, int *a, int k) {
    
    int ans = 0;
    
    quickSort(a,0,a_size-1);
    
    //printArray(a,a_size);
    
    int i = 0; 
    int j = 1;
    
    while(i < a_size && j < a_size){
        if(a[j]-a[i] < k){
            j++;
        }else if(a[j]-a[i] > k){
            i++;
        }else{
            ans++;
            i++;
            j++;
        }
    }
    
    return ans;
}

/* Tail starts here */
int main() {
    int res;
   
    int _a_size,_a_i,_k;
    scanf("%d %d", &_a_size,&_k);
    int _a[_a_size];
    for(_a_i = 0; _a_i < _a_size; _a_i++) { 
        int _a_item;
        scanf("%d", &_a_item);
        
        _a[_a_i] = _a_item;
    }
   res=pairs(_a_size,_a,_k);
   printf("%d\n",res);    
    return 0;
}
