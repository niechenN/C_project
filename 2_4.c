#include <stdio.h>

int main (void) {
	float input,output;
	printf("Enter an amount: ");
	scanf("%f",&input);
	output = input * 1.05f;
	printf("With tax adder: $%.2f\n", output);
	return 0;
}
