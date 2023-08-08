#include<stdio.h>
int main(){
	float side1,side2,side3;
	printf("Insert the sides:");
	scanf("%f,%f,%f",&side1,&side2,&side3);

	if((side1+side2) <= side3 || (side2+side3)<=side2 ||(side2+side3)<=side1)
		printf("The Triangle is Invalid");
else
	printf("Triangle is valid");
}
