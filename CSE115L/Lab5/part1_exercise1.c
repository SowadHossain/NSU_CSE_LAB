#include <stdio.h>

int main(){
	char input;
	printf("Enter first letter of a fruit:");
	scanf("%c",&input);

	switch (input) {
		case 'M':
			printf("Mango --- Tk.500/kg.");break;
		case 'A':
			printf("Apple --- Tk.250/kg.");break;

		case 'B':
			printf("Banana --- Tk.130/kg.");break;

		case 'C':
			printf("Cherry --- Tk.270/kg.");break;

	}
	return 0;
}
