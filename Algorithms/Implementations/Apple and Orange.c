#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    
    int aCount = 0;
    int oCount = 0;
    
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
       if(a + apple[apple_i]>=s && a+apple[apple_i] <=t){
           aCount++;
       }
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
       if(b + orange[orange_i]>=s && b+orange[orange_i]<=t){
           oCount++;
       }
    }
    printf("%d\n",aCount);
    printf("%d\n",oCount);
    return 0;
}
