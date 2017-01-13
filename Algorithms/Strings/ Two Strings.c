#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100001

int main() {

    int t;
    scanf("%d",&t);
    while(t--){
        char a[N],b[N];
        int s[26];
        int i,l;
        int f = 0;
        scanf("%s",a);
        scanf("%s",b);
        for(i = 0; i < 26; i++){
            s[i]=0;
        }
        l = strlen(a);
        for(i= 0; i < l; i++){
            s[a[i]-'a']++;
        }
        l = strlen(b);
        for(i = 0; i < l; i++){
            if(s[b[i]-'a']){
                printf("YES\n");
                f = 1;
                break;
            }
        }
        if(!f){
            printf("NO\n");
        }
    }
}
