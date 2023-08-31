#include <stdio.h>

int main(){
    int amount,price,total_amount,total_price,avg_price,flag=1;
    
    while(1){
        printf("Enter amount(in kg):");
        scanf("%d",&amount);
        if(amount<0){
            printf("invalid input, enter a positive number\n");
            continue;
        }else if(amount==0)
            break;
        printf("Enter price:");
        scanf("%d",&price);
        if(price<0){
            printf("invalid input, enter a positive number\n");
            continue;
        }
        total_amount+=amount;
        total_price+=price;
    }
    
    printf("\nTotal amount(in kg): %d",total_amount);
    printf("\nTotal price: %d",total_price);
    printf("\nAvarage price per kg: %.2f",(float)total_price/total_amount);
}