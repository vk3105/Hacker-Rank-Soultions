#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    char* grid[n];
    int grid_i,j,i;
    for(grid_i = 0; grid_i < n; grid_i++){
       grid[grid_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }

    for(i = 0; i < n; i++){
       for(j = 0; j < n; j++){
            if(i > 0 && i < n-1 && j >0 && j < n-1 && grid[i][j] > grid[i-1][j] && grid[i][j] > grid[i+1][j] && grid[i][j] > grid[i][j-1] && grid[i][j] > grid[i][j+1]){
                printf("X");
            }else{
                printf("%c",grid[i][j]);
            }
            }
        printf("\n");
    }
    return 0;
}
