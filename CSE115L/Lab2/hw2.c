#include<stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float determinor;

	printf("For the equation ax^2+bx+c=0\nEnter value of a,b,c:");
	scanf("%d,%d,%d",&a,&b,&c);
	
	determinor = pow(b,2)-4*a*c;

	if(determinor<0)
		printf("No real value of x");
	else{
		printf("\nx = %.2f",(-b+sqrt(determinor))/(2*a));
		printf("\nx = %.2f",(-b-sqrt(determinor))/(2*a));
	}
}
