#include <stdio.h>

int main()
{
    int num_bin=0,num_dec=0,temp=0;
    
    printf("Enter a number:");
    scanf("%d",&num_dec);
    
    while(num_dec!=0){
        temp*=10;
        temp += num_dec%2;
        num_dec/=2;
    }
    
    while(temp!=0){
        num_bin*=10;
        num_bin+=temp%10;
        temp/=10;
    }
    
    printf("binary = %d",num_bin);
}
