#include<stdio.h>

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int i=10,temp_i,rev_i,count=1;
    printf("first %d palindrome numbers are : ");
    while(count!=num){
        temp_i=i;
        rev_i=0;
        while(temp_i!=0){
            rev_i*=10;
            rev_i+=temp_i%10;
            temp_i/=10;
        }
        if(rev_i==i){
            count++;
            printf(" %d,",i);
        }
        i++;
    }
}