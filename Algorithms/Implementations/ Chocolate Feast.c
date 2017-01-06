#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int count(int n, int c, int m){
    int i;
    int j = 0;
    int r;
    
    j = n/c;
    
    n = j;
    
    while(n>=m){
        j += n/m;
        r = n%m;
        n = n/m;
        n = n+r;
    }
    return j;
}


int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int c; 
        int m; 
        scanf("%d %d %d",&n,&c,&m);     
        printf("%d\n",count(n,c,m));
    }
    return 0;
}
