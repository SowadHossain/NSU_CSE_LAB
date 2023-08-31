#include<stdio.h>

int main(){
    int n,r,result=1;
    printf("value of n:");
    scanf("%d",&n);
    printf("value of r:");
    scanf("%d",&r);

    for(int i = n-r+1;i<=n;i++)
        result*=i;
    printf("P(%d,%d)=%d",n,r,result);
}