#include <stdio.h>

int main(){
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);

	switch (num1<num2) {
		case 0:
			printf("Maximum:%d",num1);break;
		case 1:
			printf("Maximum:%d",num2);break;
	}
}
