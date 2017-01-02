#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define L 10000


int main() {

    int t;
    char a[L];
    int i,j,l,flag;
    scanf("%d",&t);
    while(t--){
        scanf("%s",a);
        
        l = strlen(a);
        i = 0;
        j = l-1;
        flag = 1;
        while(i < l-1){
            if(abs(a[i]-a[i+1]) == abs(a[j]-a[j-1])){
                i++;
                j--;
            }else {
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("Funny\n");
        }else{
            printf("Not Funny\n");
        }
        
    }
    return 0;
}
