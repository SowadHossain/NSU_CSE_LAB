#include <stdio.h>

int main()
{
    int num,super_fac=1;
    
     printf("Enter a number:");
    scanf("%d",&num);
    
    for(int i =1;i<=num;i++){
        for(int j = 1;j<=i;j++)
            super_fac*=j;
    }
    printf("super factorial sf(%d) = %d",num,super_fac);
}
