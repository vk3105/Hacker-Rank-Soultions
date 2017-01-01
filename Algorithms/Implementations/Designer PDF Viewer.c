#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    scanf("%s",word);
    
    int len = strlen(word);
    int maxHeight = 0;
    
    for(int i = 0; i < len; i++){
        if(h[word[i]-'a']>maxHeight){
            maxHeight = h[word[i]-'a'];
        }
    }
    
    printf("%d\n",maxHeight*len);
    return 0;
}
