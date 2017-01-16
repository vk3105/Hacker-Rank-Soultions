#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define L 10001

int arr[L];
int arrPos[L];

void resetArray()
{
    memset(arr,0,L);
    memset(arrPos,0,L);
}

int main() {

    int testCases,i;
    int cost,num,val;
    int flag;
    int start,end;

    scanf("%d",&testCases);

    while(testCases--)
    {
        scanf("%d",&cost);
        scanf("%d",&num);
        flag = 1;

        for(i = 0; i < num; i++)
        {
            scanf("%d",&val);
            if(arr[val]==0){
                arr[val] = val;
                arrPos[val] = i+1;
            }

            if(cost>=val && arr[cost-val]){
                if((cost-val) == val && flag)
                    flag = 0;
                else {
                    start = arrPos[cost-val];
                    end = i+1;
                }
            }
        }
        printf("%d %d\n",start,end);
        resetArray();
    }

    return 0;
}
