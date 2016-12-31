#include <stdio.h>
#include <stdlib.h>

long long callEvenFunc(long long n, int k)
{
    long long m,d,l,count;
    count = 0;
    d = n/k;
    m = n%k;
    l = (k)/2;

    if(k==2) {
        if(m == 1)
            count = d*d;
        else
            count = d*(d-1);
    } else {
        if(m == 0) {
            count = d*(l-1)*d;
            count += (d*(d-1))/2;
        } else if(m>l) {
            n = m-l;
            count = (d+1)*(d+1)*n;
            count += (l-n-1)*d*(d+1);
            count += (d*(d+1))/2;
        } else if(l>m) {
            count = (d+1)*d*m;
            count += (l-m-1)*d*d;
            count += (d*(d-1))/2;
        } else if(l==m) {
            count = (m-1)*(d+1)*d;
            count += (d*(d+1))/2;
        }
        if(d>1)
            count += (d*(d-1))/2;
    }
    return count;
}

long long callOddFunc(long long n, int k)
{
    long long m,d,l,count;
    count = 0;
    d = n/k;
    m = n%k;
    l = (k-1)/2;

    if(k==3) {
        if(m == 0) {
            count += d*d;
        } else if(m == 1) {
            count += d*(d+1);
        } else if(m == 2) {
            count += (d+1)*(d+1);
        }
    } else if(m == 0) {
        count = d*d*l;
    } else if(m>l) {
        n = m - l;
        count = n*(d+1)*(d+1);
        count += (l-n)*d*(d+1);
    } else if(l>m) {
        //n = l-m;
        count = m*(d+1)*d;
        count += (l-m)*d*d;
    } else if(l==m) {
        n = l;
        count = n*(d+1)*d;
    }

    if(d>1) {
        count += (d*(d-1))/2;
    }

    return count;
}

int main()
{
    int testCases,k;
    long long n;
    long long value;

    scanf("%d",&testCases);

    while(testCases--) {
        scanf("%lld%d",&n,&k);
        if(k%2 == 0) {
            value = callEvenFunc(n,k);
        } else {
            value = callOddFunc(n,k);
        }
        printf("%lld\n",value);
    }

    return 0;
}
