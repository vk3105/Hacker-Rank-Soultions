#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    int max = -72;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    for(int arr_i = 1; arr_i < 5; arr_i++){
       for(int arr_j = 1; arr_j < 5; arr_j++){
          int sum = arr[arr_i][arr_j] + arr[arr_i-1][arr_j] + arr[arr_i+1][arr_j] + arr[arr_i-1][arr_j-1] + arr[arr_i-1][arr_j+1] + arr[arr_i+1][arr_j-1] + arr[arr_i+1][arr_j+1];
           if(max<sum){
               max = sum;
           }
       }
    }
    printf("%d",max);
    return 0;
}

