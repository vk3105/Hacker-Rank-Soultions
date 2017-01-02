#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100001

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
        int i = 0;
        int j = 0;
        int l;
        char a[N];
        scanf("%s",a);
        l = strlen(a);
        for(i = 0; i <= l-2; i++){
            if(a[i]==a[i+1]){
                j++;
            }
        }
        printf("%d\n",j);
    }
}
