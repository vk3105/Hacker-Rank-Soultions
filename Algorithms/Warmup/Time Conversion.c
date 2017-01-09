#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    
    if(time[8]=='A'){
        if(time[0]=='1'&&time[1]=='2'){
            printf("00");
            for(int i = 2; i<8 ;i++){
                printf("%c",time[i]);
            }
        }else{
            for(int i = 0; i < 8; i++){
                printf("%c",time[i]);
            }
        }
    }else{
        int hour = (time[0]-'0')*10+(time[1]-'0');
        if(hour != 12){
            hour += 12; 
        }
        printf("%d",hour);
        for(int i = 2; i < 8; i++){
            printf("%c",time[i]);
        }
    }
    
    
    return 0;
}
