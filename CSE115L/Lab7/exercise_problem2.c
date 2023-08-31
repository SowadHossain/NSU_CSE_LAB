#include <stdio.h>

int main()
{
    int number,sum=0,is_positive=0;
    printf("Enter a number:");
    scanf("%d",&number);

    if(number>0){
        is_positive = 1;
        for(int i = 1;i<=number/2;i++){
            if(number%i==0)
                sum+=i;
        }
    }
    if(is_positive==1&&sum==number){
        printf("It is a perfect number");
    }else
        printf("It is not a perfect number");

    return 0;
}