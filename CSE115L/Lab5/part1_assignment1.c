#include <stdio.h>

int main(){
    int year,isLeapYear=0;
    printf("Enter the year:");
    scanf("%d",&year);

    if(year%4==0){
        if(year%100==0){
            if(year%400==0)
                isLeapYear = 1;
        }else
            isLeapYear = 1;
    }
    if(isLeapYear)
        printf("\n%d is a leap year",year);
    else
        printf("\n%d is not a leap year",year);

}