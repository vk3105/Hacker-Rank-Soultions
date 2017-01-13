#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char a[10000];
    char b[10000];
    
    int arr[26];
    int brr[26];

int main() {

    int i,l,m,res;
    
    scanf("%s",a);
    scanf("%s",b);
    
    l = strlen(a);
    m = strlen(b);
    
    for(i = 0; i < l; i++){
        arr[a[i]-'a']++;
    }
    
    for(i = 0; i < m; i++){
        brr[b[i]-'a']++;
    }
    
    res = 0;
    
    for(i = 0 ;i < 26; i++){
        res += abs(arr[i]-brr[i]);
    }
    
    printf("%d",res);
    
    
    return 0;
}
