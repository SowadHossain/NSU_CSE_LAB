#include<stdio.h>

int main(){
    int min,max,dif,sum=0;
    printf("minimum number:");
    scanf("%d",&min);
    printf("maximum number:");
    scanf("%d",&max);
    printf("Common difference:");
    scanf("%d",&dif);
    
    for(int i = min;i <= max;i+=dif){
        sum+=i;
        printf(" %d ",i);
        if(i!=max)
            printf("+");
    }
    printf(" = %d",sum);
}