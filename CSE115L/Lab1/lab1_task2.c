#include <stdio.h>

int main(){
	int num1,num2,num3;
	float avg;
	printf("Insert first number: ");
	scanf("%d",&num1);
	printf("Insert second number: ");
	scanf("%d",&num2);
	printf("Insert third number: ");
	scanf("%d",&num3);

	avg = (float)(num1+num2+num3)/3;

	printf("The average is : %.2f\n",avg);
}	
