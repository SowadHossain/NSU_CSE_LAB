#include <stdio.h>

int main(){
	float x1,x2,y1,y2;
	printf("insert the points(x1,y1): ");
	scanf("%f,%f",&x1,&y1);
	printf("insert the points(x2,y2): ");
	scanf("%f,%f",&x2,&y2);

	printf("Midpoint(x,y):(%.2f,%.2f)",(x1+x2)/2,(y1+y2)/2);
}
