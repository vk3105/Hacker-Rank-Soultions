#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define PCOUNT 168

int P[PCOUNT] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};

int prime[20];

long long int fast_exp(long long int base, long long int exp, long long MOD) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

long long int gcd(long long int num1,long long int num2){
    while(num1!=num2)
    {
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}

//EULERS TOTIENT FUNCTION
long long int totientFunc(long long int b){
    long long int i = 0;
    long long int j;
    long int temp = b;
    int flag = 0;

    //clear array
    for(i = 0; i <20; i++)
        prime[i] = 0;

    i = 0;


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
    
    if(b!=1){
        prime[flag] = b;
        flag++;
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

int main() {

    long long int a,b,c,x,tot,p,q,g;
    int t;
    scanf("%d",&t);
    
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&x);
        
        tot = totientFunc(x);
        //printf("\n%lld %d\n",tot,t);
        
        if(b > 0){
            b = b%tot;
            c = fast_exp(a,b,x);
        }else if(b < 0){
            b = b*(-1);
            p = (tot-1)*b;
            p = p%tot;
            c = fast_exp(a,p,x);
            /*
            g = gcd(a,x);
            a /= g;
            x /= g;
            tot = totientFunc(x);
            b *= -1;
            q = (x-2)%tot;
            p = fast_exp(a,q,x);
            c = fast_exp(p,b%tot,x);
            c = (g*c)%x;
            */
        }else{
            c = 1;
        }
        printf("%lld\n",c);
    }
    
    return 0;
}
