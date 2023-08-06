#include<stdio.h>
#include<math.h>

int main(){
	float adjacent_side,opposite_side;
	printf("Insert lenth of the Adjacent side:");
	scanf("%f",&adjacent_side);
	printf("Insert lenth of the Opposit side:");
	scanf("%f",&opposite_side);

	printf("The Hypotenuse of the triangel: %f",sqrt(pow(adjacent_side,2)+pow(opposite_side,2)));

}
