#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,t;
    scanf("%d %d",&n,&k);
    
    int count = 0;
    int pageNum = 1;
    
    for(int i = 0; i < n; i++){
        scanf("%d",&t);
        int pagesInChapter = (int)ceil(t/(double)k);
        for(int j = 0; j < pagesInChapter; j++){
            int qnsStart = k*j+1;
            int qnsEnd = k*(j+1);
            
            if(qnsEnd > t){
                qnsEnd = k*j + t%k;   
            }
            if(pageNum >= qnsStart && pageNum <= qnsEnd){
                count++;   
            }
            pageNum++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
