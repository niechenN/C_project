#include <stdio.h>
int main (void) {
	float output,x;
	printf("input a x:");
	scanf("%f",&x);
	output = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("%.2f\n",output);
}