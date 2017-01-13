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
    for (i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    
    int *arr = (int *)malloc(sizeof(int)*26);
    char *s = (char *)malloc(sizeof(char)*102400);
    scanf("%s",s);
    memset(arr,0,26);
    
    int len = strlen(s);
    
    for(int i = 0; i < len; i++){
        arr[s[i]-'a']++;    
    }
    
    int count = 0;
    int idx;
    
    quickSort(arr,0,25);
    
    for(int i= 0; i < 25; i++){
        if(arr[i]!=0 && arr[i]!=arr[i+1]){
            count++;
        }
        if(arr[i]==0 && arr[i+1]!=0){
            idx = i;
        }
    }
    count = count+1;
    
    if(count == 1){
        printf("YES");
    }else if(count ==2){
        int j;
        for(int i = idx+1; i < 25; i++){
            if(arr[i]!=arr[i+1]){
                j = i;
                break;
            }
        }
        
        if((abs(arr[j]-arr[j+1])==1 || arr[j]==1)&& (j-idx == 1 || 25-j == 1))
            printf("YES");
        else
            printf("NO");
    }else{
        printf("NO");
    }
    
    return 0;
}
