#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int top1,top2;
    scanf("%d",&n);
    
    int *stack1 = (int *)malloc(sizeof(int)*n);
    int *stack2 = (int *)malloc(sizeof(int)*n);
    
    top1 = -1;
    top2 = -1;
    
    while(n--){
        int type,num;
        scanf("%d",&type);
        
        if(type == 1){
            scanf("%d",&num);
            stack1[++top1] = num;
        }else if(type == 2){
            if(top2 == -1){
                int i;
                while(top1 != -1){
                    stack2[++top2]=stack1[top1--];
                }
            }
            top2--;
        }else{
            int i;
            if(top2 == -1){
                int i;
                while(top1 != -1){
                    stack2[++top2]=stack1[top1--];
                }
            }
            printf("%d\n",stack2[top2]);
        }
        
    }
    
    return 0;
}
