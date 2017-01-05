#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,k,c,i,j;
    
    scanf("%ld %ld",&n,&k);
    
    long int *arr = (long *)malloc(sizeof(long)*k);
    
    memset(arr,0,k);
    
    c = 0;
    
    for(i = 0; i < n; i++){
        long int p;
        scanf("%ld",&p);
        arr[p%k]++;
    }
    
    if(arr[0]>0){
        c++;// only one element allowed
    }
    
    if(k%2==0){
        c++;//middle elements cant be two so only one allowed
    }
    
    i = 1;
    j = k-1;
    while(i < j){
        c += (arr[i]>arr[j]?arr[i]:arr[j]);
        i++;
        j--;
    }
    
    printf("%ld",c);
    
    return 0;
}
