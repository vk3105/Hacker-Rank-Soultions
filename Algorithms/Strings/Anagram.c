#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 10001



int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int l;
        char a[N];
        int v = 0;
        scanf("%s",a);
        l = strlen(a);
        if(l%2){
            printf("-1\n");
        }else{
            int s1[26];
            int s2[26];
            int p = l/2;
            int i;
            int j = 0;
            
            for(i = 0; i < 26; i++){
                s1[i]=s2[i]=0;
            }
            
            for(i = 0; i < p; i++){
                s1[a[i]-'a']++;
            }
            for(i = p; i < l; i++){
                s2[a[i]-'a']++;
            }
            
            for(i = 0; i < 26; i++){
                j += abs(s2[i]-s1[i]);
            }
            printf("%d\n",j/2);
        }
    }
}
