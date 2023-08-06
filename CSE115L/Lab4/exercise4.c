#include<stdio.h>

int main(){
	int number;
	printf("Insert a number");
	scanf("%d",&number);

	if(number%5==0 && number%11==0)
		printf("the number is a multiple of 5 and 11");
	else if(number%5==0)
		printf("the number is a multiple of 5");
	else if(number%11==0)
		printf("number is a multiple of 11");
	else
		printf("number is neither a multiple of 5 nor of 11");
}
