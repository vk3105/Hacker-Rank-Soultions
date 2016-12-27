#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int num1,int num2)
{
    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}

int main() {

    int t;
    int a,b,g,n;
    
    scanf("%d",&t);
    
    while(t--){
        
        
        scanf("%d",&n);
        
        if(n == 1){
            scanf("%d",&a);
            if(a!=0)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else{
            scanf("%d",&a);
            scanf("%d",&b);

            g = gcd(a,b);
            n = n-2;

            while(n--)
            {
                scanf("%d",&a);
                if(g!=1)
                {
                    g = gcd(g,a);
                }
            }
            if(g == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }     
    
    return 0;
}
