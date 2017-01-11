#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int gcd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b; // % is remainder
        a = temp;
    }
    return a;
}

int gcdOfArray(int input[], int size) {
    int result = input[0];
    for (int i = 1; i < size; i++) {
        result = gcd(result, input[i]);
    }
    return result;
}

int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}

int lcmOfArray(int input[], int size) {
    int result = input[0];
    for (int i = 1; i < size; i++) {
        result = lcm(result, input[i]);
    }
    return result;
}


/*
    A simpleO(n log(n)) solution.
    1. find the LCM of all the integers of array A.
    2. find the GCD of all the integers of array B.
    3. Count the number of multiples of LCM that evenly divides the GCD.
*/

int main(){
    int n; 
    int m; 
    
    scanf("%d %d",&n,&m);
    
    int *a = malloc(sizeof(int) * n);
    
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    
    int *b = malloc(sizeof(int) * m);
    
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    
    int lcmA = lcmOfArray(a,n);
    int gcdB = gcdOfArray(b,m);
    
    int count = 0;
    for(int i = lcmA, j =2; i<=gcdB; i=lcmA*j,j++){
        if(gcdB%i==0){ 
            count++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
