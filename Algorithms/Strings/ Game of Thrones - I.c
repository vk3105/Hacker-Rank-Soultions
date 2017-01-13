#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char arr[100001];

int count[26];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int len,i;
    int flag;

    scanf("%s",arr);

    len = strlen(arr);

    for(i = 0; i < len; i++) {
        count[arr[i]-'a']++;
    }

    if(len%2 != 0) {
        flag = 0;
        for(i = 0; i < 26; i++) {
            if(count[i]%2 != 0 && flag == 0) {
                flag = 1;
            } else if(count[i]%2 != 0 && flag == 1) {
                flag = 2;
                break;
            }
        }
        if(flag==2) {
            printf("NO");
        } else {
            printf("YES");
        }
    } else {
        flag = 0;
        for(i = 0; i < 26; i++) {
            if(count[i]%2 != 0 && flag == 0) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            printf("NO");
        } else {
            printf("YES");
        }
    }



    return 0;
}
