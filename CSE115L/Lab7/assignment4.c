#include<stdio.h>

int main(){

    int num,sum = 0,is_prime=1;
    printf("Enter a number:");
    scanf("%d",&num);

    while (num !=0){
        sum += num%10;
        num/=10;
    }
    printf("Sum of its digis = %d",sum);
    
    for(int i = 2;i<=sum/2;i++){
        if(sum%i==0){
            is_prime=0;
            break;
        }
    }

    if(is_prime==1)
        printf("\nthe Sum is a prime number");
    else
        printf("\nthe sum is Not a prime number");

}