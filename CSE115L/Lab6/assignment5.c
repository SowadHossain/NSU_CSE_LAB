#include<stdio.h>

int main(){
    int num;

    printf("Enter number to print the multiplication table of :");
    scanf("%d",&num);

    for(int i = 1;i<=10;i++)
        printf("\n%d * %d = %d",num,i,num*i);
}