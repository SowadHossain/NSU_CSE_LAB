#include <stdio.h>

int main()
{
    int num,fac1=1,fac2=1;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    for(int i =1;i<=(2*num);i++){
        fac1 *=i;
    }
    for(int i = 1;i<=num;i++){
        fac2 *=i;
    }
    printf("rsetert %d",fac1/fac2);
    return 0;
}