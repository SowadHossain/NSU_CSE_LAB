#include<stdio.h>

int main(){
    int n,m;
    printf("Enter value of m:");
    scanf("%d",&m);
    printf("Enter value of n:");
    scanf("%d",&n);
    
    
    for(int i = n-1;i > m;i--){
        if(i%2==0)
            printf("%d ",i);
        }
}