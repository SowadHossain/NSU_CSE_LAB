#include <stdio.h>

int main(){
	float C,F;
	printf("Insert tempreture in Celcius:");
	scanf("%f",&C);
	F = C * ((float)9/5) +32;
	printf("The fehrenheit tempreture:%.2f\n",F);
}
