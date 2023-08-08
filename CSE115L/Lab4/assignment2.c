#include<stdio.h>
int main(){
	float angle1,angle2,angle3;
	printf("Insert the angels:");
	scanf("%f,%f,%f",&angle1,&angle2,&angle3);

	if(angle1+angle2+angle3 !=180)
		printf("The Triangle is Invalid");
else
	printf("Triangle is valid");
}
