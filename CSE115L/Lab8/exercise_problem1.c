#include <stdio.h>

int main()
{
    int num1,num2,gcd=1;
   
    printf("Enter two numbers(x and y):");
    scanf("%d %d",&num1,&num2);
   
    int i = gcd = (num1>num2) ? num2:num1;
   
    while(i!=0){
        if(num1%i==0&&num2%i==0){
            gcd = i;
            break;
        }
        i--;
    }
    printf("GCD(%d,%d)= %d",num1,num2,gcd);

    return 0;
}
