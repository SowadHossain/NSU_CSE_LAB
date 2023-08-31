#include<stdio.h>

int main(){
    int n,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i = 2;i <= n;i+=3)
        sum+=(i*i*i);
    printf("%d",sum);
}