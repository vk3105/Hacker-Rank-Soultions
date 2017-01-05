#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n; 
    scanf("%ld",&n);
    
    int len = strlen(s);
    
    int *arr = (int *)malloc(sizeof(int)*len);
    
    memset(arr,0,len);
    
    long count = 0;
    
    for(int i = 0 ; i < len; i++){
        if(s[i]=='a'){
            count++;
        }
        arr[i] = count;//Storing number of a's upto this index
    }
    
    long quo = n/len;
    long rem = n%len;
    
    //printf("%ld %ld %ld\n",count,quo,rem);
    
    long result = count*quo +arr[rem-1];
    
    printf("%ld",result);
    
    return 0;
}
