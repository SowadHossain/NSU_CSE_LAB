#include <stdio.h>

int main(){
	int num1,num2;
	printf("Insert first number: ");
	scanf("%d",&num1);
	printf("Insert second number: ");
	scanf("%d",&num2);
	
	printf("Sum = %d",num1+num2);
	printf("\nProduct =%d",num1*num2);
	printf("\nDifference =%d",num1-num2);
	printf("\nQuotient =%d",num1/num2);
	printf("\nRemainder =%d\n",num1%num2);

	return 0;
}
