#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int a[100];

int countSetBits(long long  int n)
{
  long long int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

void readString(char s[], int pos){
    int l,i;
    
    l = strlen(s);
    for(i = 0; i < l; i++){
        a[pos] |= (1<<(s[i]-'a'));
    }    
}

int main() {

    int t,i;
    long long int res = ~0L;
    char s[100];
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%s",s);
        readString(s,i);
    }
    
    for(i = 0; i < t; i++){
        res &= a[i];
    }
    
    printf("%d",countSetBits(res));
    
    return 0;
}
