#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int result;
    int i = 0;
    int testCases,cycles;
        
    scanf("%d",&testCases);
    
    while(testCases--)
    {   
        result = 1;
        scanf("%d",&cycles);
        for(i = 0; i < cycles; i++)
        {
            if(i%2 == 0)
                result *= 2;
            else
                result++;
        }
        printf("%d\n",result);
    }
    
    return 0;
}
