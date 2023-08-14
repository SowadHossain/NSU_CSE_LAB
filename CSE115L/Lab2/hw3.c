#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(){
	float side,radius,height;

	printf("Enter side of the cube:");
	scanf("%f",&side);

	printf("\nVolume of the cube : %.2f",pow(side, 3));

	printf("\nEnter radius and height of the cylinder:");
	scanf("%f,%f",&radius,&height);

	printf("volume of the Cylinder: %.2f",PI*pow(radius,2)*height);

}
