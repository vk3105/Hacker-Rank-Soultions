#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long arr[1000][3];

void swap(long long *a, long long *b)
{
    long long t = *a;
    *a = *b;
    *b = t;
}

long long partition (long long arr[1000][3], long long low, long long high,long long pos)
{
    long long pivot = arr[high][pos];
    
    long long i = (low - 1);
 
    for (long long j = low; j <= high- 1; j++){
        if (arr[j][pos] <= pivot) {
            i++;
            swap(&arr[i][0], &arr[j][0]);
            swap(&arr[i][1], &arr[j][1]);
            swap(&arr[i][2], &arr[j][2]);
        }
    }
    swap(&arr[i + 1][0], &arr[high][0]);
    swap(&arr[i + 1][1], &arr[high][1]);
    swap(&arr[i + 1][2], &arr[high][2]);
    return (i + 1);
}

void quickSort(long long arr[1000][3], long long low, long long high, long long pos)
{
    if (low < high){
        long long pi = partition(arr, low, high,pos);
        quickSort(arr, low, pi - 1,pos);
        quickSort(arr, pi + 1, high,pos);
    }
}


void printArray(long long arr[1000][3], long long size)
{
    long long i;
    for (i=0; i < size; i++){
        printf("%lld %lld %lld\n",arr[i][0],arr[i][1],arr[i][2]);
    }
}

int main() {

    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
        
    for(int i = 0; i < k; i++){
        scanf("%lld %lld %lld",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    
    long long total = n*m;
    long long len = 0;
    long long i = 1;
    long long j = 0;
    
    quickSort(arr,0,k-1,0);

    while(i < k){
        while(arr[i-1][0] == arr[i][0]){
            i++;
        }
        quickSort(arr,j,i-1,1);
        j = i;
        i++;
    }
    
    //printArray(arr,k);
    
    i = 1;
    long long start = arr[0][1];
    long long end = arr[0][2];
    
    while(i < k){    
        if(arr[i-1][0] == arr[i][0]){
            //printf("Same for %lld  %lld\n",i-1,i);
            if(arr[i-1][1] == arr[i][1]){
                if(end < arr[i][2]){
                    end = arr[i][2];
                }
            }else if(arr[i][1] <= end){
                if(end < arr[i][2]){
                    end = arr[i][2];
                }
            }else if(arr[i][1] > end){
                
                len += end - start + 1;
                
                //printf("Same %lld  %lld\n",start,end);
                
                start = arr[i][1];
                end = arr[i][2];
                //printf("Same updated %lld  %lld\n",start,end);
            }
            if(i == k-1){
                len += end - start + 1;
            }
        }else{
            len += end - start + 1;
            //printf("Changed %lld  %lld  %lld  %lld\n",i,start,end,len);
            start = arr[i][1];
            end = arr[i][2];
            
            if(i == k-1){
                len += end - start + 1;
            }
        }
        i++;
    }
    
    printf("%lld\n",total-len);
    
    return 0;
}
