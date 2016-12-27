#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007

void multiply(long long int F[2][2], long long int M[2][2]);
 
void power(long long int  F[2][2], long long int n);
 
/* function that returns nth Fibonacci number */
long long int fib(long long int a,long long int b, long long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
    long long int v;
  if (n == 0)
    return a;
  if (n == 1)
    return b;
  power(F, n-1);
  v = ((F[0][0]*b)%MOD + (F[0][1]*a)%MOD)%MOD;
  return v;
}
 
/* Optimized version of power() in method 4 */
void power(long long int  F[2][2],long long int n)
{
  if( n == 0 || n == 1)
      return;
  long long int  M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
    
  F[0][0] %= MOD;
  F[0][1] %= MOD;
  F[1][0] %= MOD;
  F[1][1] %= MOD;
  
  multiply(F, F);
 
  if (n%2 != 0)
     multiply(F, M);
}
 
void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int  x =  ((F[0][0]*M[0][0])%MOD + (F[0][1]*M[1][0])%MOD)%MOD;
  long long int  y =  ((F[0][0]*M[0][1])%MOD + (F[0][1]*M[1][1])%MOD)%MOD;
  long long int  z =  ((F[1][0]*M[0][0])%MOD + (F[1][1]*M[1][0])%MOD)%MOD;
  long long int  w =  ((F[1][0]*M[0][1])%MOD + (F[1][1]*M[1][1])%MOD)%MOD;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 




int main() {
    int t;
    
    long long int a,b,v,n;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%lld %lld %lld",&a,&b,&n);
        
        printf("%lld\n",fib(a,b,n));
    }
    
    return 0;
}
