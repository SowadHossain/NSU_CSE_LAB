#include<stdio.h>

int main(){
    int n,sum=0,temp;
    printf("Enter value of n:");
    scanf("%d",&n);
    temp = 5;
    for(int i = 4;temp <= n;i+=2){
        sum+=(temp*temp);
        temp+=i;
    }
    printf("%d",sum);
}