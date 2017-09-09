#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define PCOUNT 167
int P[PCOUNT] = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};

int prime[10];

int flag = 0;




//EULERS TOTIENT FUNCTION
long int totientFunc(long int b){
    int i = 0;
    int j;
    long int temp = b;
    //factors
    while(b != 1 && i < PCOUNT){

        if(b%P[i] == 0){
            while(b%P[i]==0){
                b /= P[i];
            }
            prime[flag] = P[i];
            flag++;
        }
        i++;
    }

    b = temp;
    
    //prime number
    if(flag == 0)
        b -= 1;
    
    //num
    for(j = 0; j< flag; j++){
        b *= (prime[j]-1);
    }
    //deno
    for(j = 0; j< flag; j++){
        b /= prime[j];
    }

    return b;
}

long int fast_exp(long int base, long int exp, long MOD) {

    long int res=1;

    while(exp>0) {

       if(exp%2==1)
            res=(res*base)%MOD;

       base=(base*base)%MOD;

       exp/=2;
    }

    return res;
}

int main()
{
    long int a,b,i;
    long int count,tot,power,val,temp;
    long int countMod;

    scanf("%ld %ld",&a,&b);


    count = 0;
    val = 1;
    temp = b;

    while(temp%2 == 0){
        count++;
        temp /= 2;
    }

    if(temp>1){
        tot = totientFunc(temp);

        power = fast_exp(2,a,tot);

        countMod = count%tot;

        power = power - countMod;

        if(power < 0)
            power += tot;

        val = fast_exp(2,power,b);
    }

    if(count>0){
        for(i = 0; i < count; i++){
            val = (val*2)%b;
        }
    }
    printf("%ld",val);
    return 0;
}
