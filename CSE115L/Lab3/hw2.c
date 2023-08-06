#include <stdio.h>
#include <math.h>
#define PI 3.1416


int main(){
	float radius,height;
	printf("Insert the Radius & Height of the cone:");
	scanf("%f , %f",&radius, &height);

	printf("Volume of the cone: %.2f",PI * pow(radius,2) * (height/3));
}
