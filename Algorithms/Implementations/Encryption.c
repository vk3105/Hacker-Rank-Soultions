#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    
    double len = strlen(s);
    
    int rows = floor(sqrt(len));
    int cols = ceil(sqrt(len));
    
    //printf("%f %d %d\n",len,rows,cols);
    
    for(int j = 0; j < cols; j++){
        for(int i = 0; i < len; i++){
            if(i%cols==j){
                printf("%c",s[i]);
            }
        }
        printf(" ");
    }
    
    return 0;
}
