#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k;
    int charged,actual;
    scanf("%d %d",&n,&k);
    actual = 0;
    for(int i = 0; i < n ; i++){
        int price;
        scanf("%d",&price);
        if(i!=k){
            actual += price;
        }
    }
    scanf("%d",&charged);
    if(charged == actual/2){
        printf("Bon Appetit\n");
    }else{
        printf("%d\n",(charged-(actual/2)));
    }
    return 0;
}
