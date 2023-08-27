#include <stdio.h>

int main(){
	float x,y;
	char operator;

	printf("Enter two numbers:");
	scanf("%f %f",&x,&y);

	printf("Enter operator: ");
	scanf(" %c",&operator);

	switch (operator) {
		case '+':
			printf("%f+%f = %f",x,y,x+y);break;
		case '-':
			printf("%f-%f = %f",x,y,x-y);break;
		case '*':
			printf("%f*%f = %f",x,y,x*y);break;
		case '/':
			printf("%f/%f = %f",x,y,x/y);break;
	}
}
