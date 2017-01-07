#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define N 26

void printArray(int arr[],int n){
    for(int i = 0; i < n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int isHappyLadyBugs(char *s,int n){
    int *arr = (int *)malloc(sizeof(int)*N);
    int i,j,k;
    int flag = 1;
    
    
    int len = strlen(s);
    
    int bugCount = 0;
    
    memset(arr,0,N);
    
    for(i = 0; i < len; i++){
        if(s[i]!='_'){
            arr[s[i]-'A']++;
            bugCount++;
        }
    }
    
    if(bugCount == n){
        for(i = 1; i < n-1; i++){
            if(s[i]!=s[i+1]&&s[i]!=s[i-1]){
                flag = 0;
                break;
            }
        }
    }
    
    for(i = 0; i < N; i++){
        if(arr[i]==1){
            flag = 0;
            break;
        }
    }
        
    return flag;
}

int main(){
    int Q; 
    scanf("%d",&Q);
    for(int a0 = 0; a0 < Q; a0++){
        int n; 
        scanf("%d",&n);
        char* b = (char *)malloc(512000 * sizeof(char));
        scanf("%s",b);
        if(isHappyLadyBugs(b,n)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
