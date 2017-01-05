#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int findMaxSubjects(char *s,char *t){
    int count = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]=='1' || t[i]=='1'){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int n; 
    int m;
    int i,j;
    scanf("%d %d",&n,&m);
    char* topic[n];
    
    int *arr = (int *)malloc(sizeof(int)*(m+1));
    memset(arr,0,m+1);
    
    for(int topic_i = 0; topic_i < n; topic_i++){
       topic[topic_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",topic[topic_i]);
    }
    
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            int count = findMaxSubjects(topic[i],topic[j]);
            arr[count] += 1;
        }
    }
    
    for(i = m; i >= 0; i--){
        if(arr[i]!=0){
            printf("%d\n",i);
            printf("%d\n",arr[i]);
            break;
        }
        
    }
    return 0;
}
