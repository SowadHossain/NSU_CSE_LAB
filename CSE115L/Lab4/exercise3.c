#include<stdio.h>

int main(){
	int number;
	printf("Insert a number");
	scanf("%d",&number);

	if(number%2==0 && number%5==0)
		printf("the number is invalid");
	else if(number%2==0 || number%5==0)
		printf("the number is valid");
	else
		printf("number is invalid");
}
