#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int arr[10]){
    printf("\n");
    for(int i = 0 ; i < 10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int isMultipleOfEight(int arr[10]){
    int flag = 1;
    for(int i = 0; i <= 1000; i += 8){
        flag = 1;
        int ones = i%10;
        int tens = (i/10)%10;
        int hundreds = (i/100)%10;
        arr[ones]--;
        arr[tens]--;
        arr[hundreds]--;
        for(int i = 0; i < 10; i++){
            if(arr[i] < 0){
                arr[ones]++;
                arr[tens]++;
                arr[hundreds]++;
                flag = 0;
                break;
            }
        }
        if(flag){
            break;
        }
    }    
    return flag;
}

int main() {

    int n,t;
    
    
    scanf("%d",&t);
    
    while(t--){
        int arr[10]={0,0,0,0,0,0,0,0,0,0};
        char str[111];
        scanf("%s",str);
        int len = strlen(str);
        
        for(int i = 0; i < len; i++){
            arr[str[i]-'0']++;
        }
        
        if(len == 1){
            int num = atoi(str);
            if(num%8){
                printf("NO\n");
            }else{
                printf("YES\n");
            }
        }else if(len == 2){
            int num = atoi(str);
            int x = num%10;
            int y = num/10;
            if(num%8 == 0 || (x*10+y)%8 == 0){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            if(isMultipleOfEight(arr)){
                
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
        
    }
    
    return 0;
}
