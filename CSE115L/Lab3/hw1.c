#include <stdio.h>

int main(){
	float trapezoid_base1,trapezoid_base2,trapezoid_height;
	float parallelogram_base,parallelogram_height;
	
	printf("Trapezoid base1,base2,height: ");
	scanf("%f,%f,%f",&trapezoid_base1,&trapezoid_base2,&trapezoid_height);

	printf("Area of the Trapezoid: %.2f\n",.5*(trapezoid_base1+trapezoid_base2)*trapezoid_height);

	printf("Prallelogram base,height:");
	scanf("%f,%f",&parallelogram_base,&parallelogram_height);

	printf("Area of the Prallelogram: %.2f",parallelogram_base*parallelogram_height);

}
