#include<stdio.h>

int main(){
	int num_month;
	printf("Number of the month:");
	scanf("%d",&num_month);

	if(num_month==2)
		printf("\n28 Days");
	else if(num_month == 1||num_month == 3||num_month == 5||num_month == 7||num_month == 8||num_month == 10||num_month == 12)
		printf("\n31 Days");
	else
		printf("\n30 days");
}
