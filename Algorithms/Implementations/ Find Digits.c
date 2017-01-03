#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findNumberOfDigits(long long int num)
{
    int count = 0;
    int digit;
    long long int temp = num;
    int arr[9] = {0,0,0,0,0,0,0,0,0};

    while(temp)
    {
        digit = temp % 10;
        temp = temp/10;

        if(digit!=0 /*&& arr[digit-1]== 0 */&& (num%digit == 0)){
            //arr[digit-1] = 1;
            count++;
        }
    }
    return count;
}

int main()
{
    int testCases;
    long long int num;

    scanf("%d",&testCases);

    while(testCases--)
    {
        scanf("%lld",&num);
        printf("%d\n",findNumberOfDigits(num));
    }

    return 0;
}
