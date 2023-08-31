#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i = 4;i <= n;i+=7)
        sum+=i;
    printf("%d",sum);
}