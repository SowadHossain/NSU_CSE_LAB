#include<stdio.h>

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    for(int i = 1;i<=number;i++){
        printf("*");
        for(int j = 1;j<=(i-1)*2-1;j++)
            printf(" ");
        if(i!=1)
            printf("*");
        printf("\n");
    }    

    for(int i = number-1;i > 0;i--){
        printf("*");
        for(int j = 1;j<=(i-1)*2-1;j++)
            printf(" ");
        if(i!=1)
            printf("*");
        printf("\n");
    }    


}