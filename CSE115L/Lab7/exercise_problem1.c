#include<stdio.h>

int main(){
    int num,first_digit,last_digit;
    printf("Enter a number:");
    scanf("%d",&num);
    last_digit = num%10;

    while (num !=0)
    {
        first_digit=num%10;
        num/=10;
    }
    
    printf("\nFirst digit :%d\nLast digit: %d",first_digit,last_digit);
}