#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    long long int xMax,xMin,yMax,yMin;
    long long int a,b,n;
    
    double d = 0.0;
    
    xMax = LLONG_MIN;
    yMax = LLONG_MIN;
    xMin = LLONG_MAX;
    yMin = LLONG_MAX;
    
    scanf("%lld",&n);
    
    while(n--){
        scanf("%lld %lld",&a,&b);
        if(a!=0){
            if(xMax < a){
                xMax = a;
            }
            if(xMin > a){
                xMin = a;
            }
        }else if(b!=0){
            if(yMax < b){
                yMax = b;
            }
            if(yMin > b){
                yMin = b;
            }
        }else{
            if(xMax < a){
                xMax = a;
            }
            if(xMin > a){
                xMin = a;
            }
            if(yMax < b){
                yMax = b;
            }
            if(yMin > b){
                yMin = b;
            }
        }
    }
    
    
    
    if(d < xMax-xMin){
        d = xMax-xMin;
    }
    if(d < yMax-yMin){
        d = yMax-yMin;
    }
    
    if(d < sqrt(yMax*yMax+xMin*xMin)){
        d = sqrt(yMax*yMax+xMin*xMin);
    }
    
    if(d < sqrt(yMin*yMin+xMin*xMin)){
        d = sqrt(yMin*yMin+xMin*xMin);
    }
    
    if(d < sqrt(xMax*xMax+yMin*yMin)){
        d = sqrt(xMax*xMax+yMin*yMin);
    }
    
    if(d < sqrt(xMax*xMax+yMax*yMax)){
        d = sqrt(xMax*xMax+yMax*yMax);
    }
       
    printf("%lf",d);    
    
    return 0;
}
