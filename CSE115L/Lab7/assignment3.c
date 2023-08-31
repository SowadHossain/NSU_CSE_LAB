#include <stdio.h>

int main()
{
    int number,reverse=0,is_prime=1;
    printf("Enter a number:");
    scanf("%d",&number);

    int temp = number;
//reverse a number
    while(temp!=0){
        reverse*=10;
        reverse+=temp%10;
        temp/=10;
    }
    printf("\n%d",reverse);

//check prime

    for(int i = 2;i<=reverse/2;i++){
        if(reverse%i==0)
            is_prime=0;
    }

    if(is_prime==1)
        printf("\nthe reversed number is a prime number");
    else
        printf("\nNot a prime number");

    return 0;
}
    