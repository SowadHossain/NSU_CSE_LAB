#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("For the Equation ax^2 + bx + c = 0;\nInstert the value of a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	
	if((pow(b,2)-4*a*c)<0)
		printf("\nNo real root exist");
	else{
		printf("\nRoot1:%.2f",((-b+sqrt((pow(b,2)-4*a*c)))/(2*a)));
		printf("\nRoot2:%.2f",((-b-sqrt((pow(b,2)-4*a*c)))/(2*a)));
	}
}
