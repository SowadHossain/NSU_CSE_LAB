#include <stdio.h>
#define PI 3.1416
int main(){
	float arc,radius;
	printf("Arc lenth:");
	scanf("%f",&arc);
	printf("Radius : ");
	scanf("%f",&radius);

	printf("Angle of the segment: %.2f",(arc*360)/(2*PI*radius));
}
