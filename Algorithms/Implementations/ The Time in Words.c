#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void numbers(int h){
    if(h==1){
        printf("one ");
    }else if(h==2){
        printf("two ");
    }else if(h==3){
        printf("three ");
    }else if(h==4){
        printf("four ");
    }else if(h==5){
        printf("five ");
    }else if(h==6){
        printf("six ");
    }else if(h==7){
        printf("seven ");
    }else if(h==8){
        printf("eight ");
    }else if(h==9){
        printf("nine ");
    }else if(h==10){
        printf("ten ");
    }else if(h==11){
        printf("eleven ");
    }else if(h==12){
        printf("twelve ");
    }else if(h==13){
        printf("thirteen ");
    }else if(h==14){
        printf("fourteen ");
    }else if(h==15){
        printf("fifteen ");
    }else if(h==16){
        printf("sixteen ");
    }else if(h==17){
        printf("seventeen ");
    }else if(h==18){
        printf("eighteen ");
    }else if(h==19){
        printf("nineteen ");
    }else if(h==20){
        printf("twenty ");
    }
}

void printMinute(int m){
    if(m<=20){
        numbers(m);
    }else{
        numbers(20);
        numbers(m%10);
    }
}

int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);
    
    if(m == 0){
        numbers(h);
        printf("o' clock");
    }else{
        if(m<30 && m!=15){
            printMinute(m);
            printf("minutes past ");
            numbers(h);
        }else if(m == 30){
            printf("half past ");
            numbers(h);
        }else if(m == 15){
            printf("quarter past ");
            numbers(h);
        }else if(m == 45){
            printf("quarter to ");
            numbers(h+1);
        }else{
            printMinute(60-m);
            printf("minutes to ");
            numbers(h+1);
        }
    }
   
    return 0;
}
