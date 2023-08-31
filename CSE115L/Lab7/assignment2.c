#include <stdio.h>

int main()
{
    int number,reverse=0;
    printf("Enter a number:");
    scanf("%d",&number);

    int temp = number;
//reverse a number
    while(temp!=0){
        reverse*=10;
        reverse+=temp%10;
        temp/=10;
    }
    printf("\nReversed number is %d",reverse);

//check palindrome

    if(number==reverse)
        printf("\nnumber is a palindrome");
    else
        printf("\nnumber is not a palindrome");
    
    return 0;
}