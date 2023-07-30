#include <stdio.h>
#include <math.h>

int main(){

	float x,result;
	printf("Enter the value of x:");
	scanf("%f",&x);

	result = 5* pow(x,3) - 4* pow(x,2) + sqrt(x) + 3;

	printf("Result: %f",result);

	return 0;
}
