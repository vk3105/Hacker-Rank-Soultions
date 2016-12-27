#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define P 168
#define M 15

long int PRIMES[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};

long int arr[2][M];

void cleaup()
{
    long int i = 0;
    for(i = 0; i < M; i++)
    {
        arr[0][i] = 0;
        arr[1][i] = 0;
    }
}

void findPrimefactors(long int x)
{
    long int i = 0;
    long int j = 0;
    cleaup();
    while(i < P && x > 1)
    {
        if(x%PRIMES[i] == 0)
        {
            while(x%PRIMES[i] == 0)
            {
                arr[0][j] = PRIMES[i];
                arr[1][j]++;
                x /= PRIMES[i];
            }
            j++;
        }
        i++;
    }

    if(x > 1)
    {
        arr[0][j] = x;
        arr[1][j]++;
    }
}

long int totalDivisors()
{
    long int i;
    long int val = 1;
    for(i = 0; i < M; i++)
    {
        val *= (arr[1][i]+1);
    }
    return val;
}

long int totalEvenPerfectSquare()
{
    long int i;
    long int val = 1;
    if(arr[0][0] == 2 && arr[1][0] >= 2)
    {
        i = 0;
        arr[1][0] -= 2;
        while(arr[0][i])
        {
            arr[1][i] /= 2;
            i++;
        }
        val = totalDivisors();
        return val;
    }
    else
    {
        return 0;
    }
}

long int gcd(long int num1,long int num2)
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


int main()
{

    long int t;
    long int x;
    long int a,b,c,g;
    scanf("%ld",&t);

    while(t--)
    {
        scanf("%ld",&x);
        findPrimefactors(x);

        b = totalDivisors()-1;
        a = totalEvenPerfectSquare();

        c = (int long) sqrt(x);

        if(x == c*c && x%4 == 0)
        {
            a--;
        }

        if(a == 0)
            printf("0\n");
        else
        {
            g = gcd(a,b);
            a /= g;
            b /= g;
            printf("%ld/%ld\n",a,b);
        }
    }

    return 0;
}

