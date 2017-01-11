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
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    
    int i = 0;
    int j = 0;
    
    int lenT,lenS;
    
    lenT = strlen(t);
    lenS = strlen(s);
    
    while(i < lenS && j < lenT){
        if(s[i]==t[j]){
            i++;
            j++;
        }else{
            break;
        }
    }
    
    //printf("%d %d %d\n",lenS,lenT,i);
    
    if(i==lenS && lenT == lenS && k >= lenT){
        printf("Yes\n");
    }else{
        int p = lenT-i + lenS-i;
        //printf("%d %d\n",i,p);
        while(p < k) {
            if (i-- > 0)
                p += 2;
            else
                p++;
        }

        printf(p == k ? "Yes" : "No");
    }
    
    return 0;
}
