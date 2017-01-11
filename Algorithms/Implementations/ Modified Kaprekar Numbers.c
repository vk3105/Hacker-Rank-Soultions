#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countDigits(long a){
    int count = 0;
    while(a){
        a /= 10;
        count++;
    }
    return count;
}

int isKarprekarNumber(int p){
    long long int sqr = pow(p,2);
    int flag = 0;
    int digits = countDigits(sqr);
    int numDig = countDigits(p);

    long long int placeVal = pow(10,numDig);
    long long int right = sqr%placeVal;
    long long int left = sqr/placeVal;
    
    if(right+left == p){
        flag = 1;
    }

    return flag;
}

void callKaprekarFunction(int p, int q){
    int count = 0;
    for(int i = p; i <= q; i++){
        if(isKarprekarNumber(i)){
            count++;
            printf("%d ",i);
    
        }
    }
    
    if(count==0){
        printf("INVALID RANGE");
    }
}

int main() {

    int p,q;
    
    scanf("%d %d",&p,&q);
    
    callKaprekarFunction(p,q);
    
    return 0;
}
