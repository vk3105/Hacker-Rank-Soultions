#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count,len,inc,dec,cases;


    scanf("%d",&cases);

    while(cases--)
    {
        char arr[10000];
        scanf("%s",arr);

        count = 0;
        len = strlen(arr);
        inc = 0;
        dec = len-1;

        while(inc <= dec)
        {
            if(arr[inc]>arr[dec])
                count += arr[inc]-arr[dec];
            else
                count += arr[dec]-arr[inc];
            inc++;
            dec--;
        }

        printf("%d\n",count);
    }
    return 0;
}
