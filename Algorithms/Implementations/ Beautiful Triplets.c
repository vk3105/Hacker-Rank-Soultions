#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int binarySearch(int x, int *arr, int low, int high){
    int mid = (high + low)/2;
    
    if(arr[mid]==x){
        return 1;
    }
    
    if(low == high){
        if(arr[low]==x){
            return 1;
        }else{
            return 0;
        }
    }
    
    else{
        if(x>arr[mid]){
            return binarySearch(x,arr,mid+1,high);
        }else{
            return binarySearch(x,arr,low,mid);
        }
    }
}
/*
    This solution is based on fiding the two numbers who's difference is 2*d.
    And then finding if the number a[i]+d exists in the given array.
    
    NOTE : Unique numbers and increasing order of the number in the array.  
*/
void solutionA(){
    
    int n,d;
    scanf("%d %d",&n,&d);
    
    int *arr = (int *)malloc(sizeof(int)*n);
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j]-arr[i]==2*d){
                if(binarySearch(arr[i]+d,arr,0,n-1)){
                    count++;
                }
            }
        }
    }
    
    printf("%d",count);
}

/*
    This solution is based on two facts :
        a) Unique and increasing order of the number
        b) Given range and size of numbers is less
    Based on these two facts one can make a temporary array (flag) and use the fact the numbers are in AP.
    Since numbers are in AP, we can check if a[i] is part of the solution by checking its corresponding
    values a[i]+d and a[i]+2*d must be set to 1 in the flag array.
*/
void solutionB(){
    int n,d;
    scanf("%d %d",&n,&d);
    
    int *arr = (int *)malloc(sizeof(int)*n);
    
    int count = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int limit = 2*1000+d+1;
    int *flag = (int *)malloc(sizeof(int)*limit);
    memset(flag,0,limit);
    
    for(int i = 0; i < n; i++){
        flag[arr[i]] = 1;
    }
    
    for(int i = 0; i < n; i++){
        if(flag[arr[i]+d] && flag[arr[i]+2*d]){
            count++;
        }
    }
    
    printf("%d",count);
}

int main() {

    //solutionA();//Complexity is n*n + k*log(n);
    solutionB();//Complexity is n
    
    return 0;
}
