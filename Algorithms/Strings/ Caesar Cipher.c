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
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    for(int i = 0; i < strlen(s); i++){
        if(s[i]>='a'&&s[i]<='z'){
            int val = (s[i]-'a'+k)%26;
            s[i] = val+'a';
        }else if(s[i]>='A'&&s[i]<='Z'){
            int val = (s[i]-'A'+k)%26;
            s[i] = val+'A';
        }
    }
    printf("%s",s);
    return 0;
}
