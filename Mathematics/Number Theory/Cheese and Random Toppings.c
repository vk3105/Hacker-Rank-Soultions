#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*http://www.cut-the-knot.org/arithmetic/algebra/LucasTheorem.shtml*/

#define N 47
#define M 15

long long int P[M] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

long long int Prm[M];
long long int R[M];

long long int arr[N][N];

void clear(){
    long long int i = 0;
    for(i = 0;i < M; i++){
        Prm[i] = 0;
        R[i] = 0;
    }
}

void fillArr()
{
    long long int i,j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(j == 0 || i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
}

long long int fast_exp(long long int base, long long int exp, long long MOD) {
    long long int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res;
}

void findPrimeFactors(long long int m){
    long long int i,j;
    j = 0;
    i = 0; 
    while(i < 15){
        if(m%P[i] == 0){
            Prm[j] = P[i];
            j++;
        }
        i++;
    }
}

long long int lucasTheoremRem(long long int n, long long int k,long long int p){
    long long int val = 1;
    long long nmod,kmod;
    while(n){
        nmod = n%p;
        kmod = k%p;
        n = n/p;
        k = k/p;
        if(kmod > nmod){
            val = 0;
            break;
        }
        val = (val*arr[nmod][kmod])%p;
    }
    return val;
}

long long chineseRemTheorem(){
    long long int m = 1;
    long long int i = 0;
    long long val = 0;
    
    long long int mi,yi;
    
    while(Prm[i]){
        m *= Prm[i];
        i++;
    }
    
    i = 0;
    
    while(Prm[i]){
        mi = m/Prm[i];
        yi = fast_exp(mi,Prm[i]-2,Prm[i]);
        
        val = (val + (R[i]*yi*mi)%m)%m;
        i++;
    }
    return val;
}

int main() {
    
    long long int t,i;
    
    long long int n,r,m;
    
    fillArr();
    
    scanf("%lld",&t);
    
    while(t--){
        scanf("%lld %lld %lld",&n,&r,&m);
        clear();
        findPrimeFactors(m);
        i = 0;
        while(Prm[i]){
            R[i] = lucasTheoremRem(n,r,Prm[i]);
            i++;
        }
        
        printf("%lld\n",chineseRemTheorem());
        
    }

    return 0;
}
