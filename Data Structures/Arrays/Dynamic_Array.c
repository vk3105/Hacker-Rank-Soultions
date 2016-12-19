/*
 ============================================================================
 Name        : Dynamic.c
 Author      : infinity
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100001

int main() {

    long long n,q,i,l;

    long long idx[N];
    long long out[N];
    long long qn,x,y;
    long long lastAns;

    lastAns = 0;
    l = 0;

    scanf("%lld %lld",&n,&q);

    long long  *arr[n];

    for (i = 0; i < n; i++)
         arr[i] = (long long *)malloc(sizeof(long long));

    memset(idx,0,N);
    memset(out,0,N);

    for(i = 0; i < q; i++){
        scanf("%lld %lld %lld",&qn,&x,&y);
        long long seq = (x^lastAns)%n;
        if(qn==1){
        	arr[seq] = realloc(arr[seq], (idx[seq]+1) * sizeof(long long));
            arr[seq][idx[seq]] = y;
            idx[seq]++;
        }else{
            lastAns = arr[seq][y%idx[seq]];
            out[l] = lastAns;
            l++;
        }
    }

    for(i = 0; i < l; i++){
        printf("%lld\n",out[i]);
    }

    return 0;
}

