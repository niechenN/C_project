#include <stdio.h>
int main (void) {
	float input,output;
	printf("input a x:");
	scanf("%f",&input);
	output = (3 * input * input * input * input * input) + (2 * input * input * input * input) - (5 * input * input * input) - (input * input) + (7 * input) -6;
	printf("%.2f\n",output);
}