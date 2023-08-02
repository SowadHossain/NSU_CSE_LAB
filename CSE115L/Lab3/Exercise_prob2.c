#include <stdio.h>
#include <math.h>

int  main(){
	int m,n;
	printf("Insert m: ");
	scanf("%d",&m);
	printf("Insert n: ");
	scanf("%d",&n);

	printf("\nm*2^n :%f",(m*pow((double)2, (double)n)));
	printf("\nm<<n :%d",m<<n);
	printf("\nm/2^n :%f",(m/pow((double)2, (double)n)));
	printf("\nm>>n :%d",m>>n);


}
