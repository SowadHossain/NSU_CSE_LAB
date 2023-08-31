#include <stdio.h>

int main()
{
    int number,reverse=0;
    printf("Enter a number:");
    scanf("%d",&number);

    int temp = number;
    while(temp!=0){
        reverse*=10;
        reverse+=temp%10;
        temp/=10;
    }
    printf("\n%d",reverse);

    return 0;
}