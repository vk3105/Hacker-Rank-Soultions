#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int maxValue(long a, long b, long c){
    long maxVal = a>b?a:b;
    return (maxVal>c?maxVal:c);
}

int main(){
    int n1; 
    int n2; 
    int n3; 
    
    long int sum1 = 0;
    long int sum2 = 0;
    long int sum3 = 0;
    
    int idx1=0;
    int idx2=0;
    int idx3=0;
    
    scanf("%d %d %d",&n1,&n2,&n3);
    
    int *h1 = malloc(sizeof(int) * n1);
    for(int h1_i = 0; h1_i < n1; h1_i++){
        scanf("%d",&h1[h1_i]);
        sum1 += h1[h1_i];
    }
    int *h2 = malloc(sizeof(int) * n2);
    for(int h2_i = 0; h2_i < n2; h2_i++){
        scanf("%d",&h2[h2_i]);
        sum2 += h2[h2_i];
    }
    int *h3 = malloc(sizeof(int) * n3);
    for(int h3_i = 0; h3_i < n3; h3_i++){
        scanf("%d",&h3[h3_i]);
        sum3 += h3[h3_i];
    }
    
    while(sum1 != sum2 || sum2 != sum3 || sum1 != sum3){
        if(idx1 < n1 && idx2 < n2 && idx3 < n3){
            
            long int max = maxValue(sum1,sum2,sum3);
            
            
            if(sum1==max){
                sum1 -= h1[idx1];
                idx1++;
            }
            if(sum2==max){
                sum2 -= h2[idx2];
                idx2++;
            }
            if(sum3==max){
                sum3 -= h3[idx3];
                idx3++;
            }
        }else{
            sum1 = 0;
            break;
        }
    }
    
    printf("%ld",sum1);
    
    return 0;
}
