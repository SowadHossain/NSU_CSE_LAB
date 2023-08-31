#include <stdio.h>

int main()
{
    int num,reversed_num=0;
    
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(num != 0){
        reversed_num*=10;
        reversed_num += num%10;
        
        num/=10;
        }
    while(reversed_num!=0)
    {
        switch(reversed_num%10)  {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break; 
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine ");
        }

       reversed_num/=10; 
    }
}