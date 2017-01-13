#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100005

int main() {

    int t;
    scanf("%d",&t);
    while(t--){
        char s[N];
        int i,j,k,l;
        int v = -1;
        scanf("%s",s);
        
        l = strlen(s);
        i = 0; 
        j = l-1;
        
        while(i<=j){
            if(s[i] != s[j]){
                int p = i;
                int q = j-1;
                //printf("%d %d\n",p,q);
                int flag = 0;
                while(p<=q){
                    if(s[p]!=s[q]){
                        flag = 1;
                        break;
                    }
                    p++;
                    q--;
                }
                
                //printf("%d\n",flag);
                
                if(!flag){
                    v = j;
                }else{
                    v = i;
                }
                break;
            }
            i++;
            j--;
        }
        printf("%d\n",v);
    }
}
