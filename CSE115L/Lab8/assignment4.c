#include <stdio.h>

int main()
{
    int number,temp=1;
    float sum=0;
    printf("Enter a number:");
    scanf("%d",&number);
    
    for(int i = 1;i <=number;i++){
        temp = 1;
        for(int j = 1;j<=i;j++){
            temp*=j;
        }
        sum += 1.0/temp;
    }

    printf("%f",sum);
}
