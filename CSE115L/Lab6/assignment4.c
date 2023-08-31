#include<stdio.h>

int main(){
    int min,max,common_ratio,sum=0,temp;
    printf("minimum number:");
    scanf("%d",&min);
    printf("maximum number:");
    scanf("%d",&max);
    printf("Common ratio:");
    scanf("%d",&common_ratio);
    
    temp = min;
    for(int i = min;temp <= max;i++){
        sum+=temp;
        printf(" %d ",temp);
        temp*=common_ratio;
        if(temp<=max)
            printf("+");
        
    }
    printf(" = %d",sum);
}