#include<stdio.h>

int main(){
	int number;
	printf("Insert the number:");
	scanf("%d",&number);

	printf("\n500: %d",number/500);
	number%=500;
	printf("\n100:%d",number/100);
	number%=100;
	printf("\n50:%d",number/50);
	number%=50;
	printf("\n20:%d",number/20);
	number%=20;
	printf("\n10:%d",number/10);
	number%=10;
	printf("\n5:%d",number/5);
	number%=5;
	printf("\n2:%d",number/2);
	number%=2;
	printf("\n1:%d",number);
}
