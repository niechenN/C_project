#include <stdio.h>
int main (void) {
	int tw,ty,x,f,te,tey,y,fi,fiy,z,st;
	printf("input a integer number:");
	scanf("%d",&x);
	tw = x / 20; // 
	ty = x % 20; // 余数

	if(ty == 0) {
		printf("20 is %d,10 is 0, 5 is 0, 1 is 0\n",tw);
		return 0;
	}

	f = x - tw * 20;

	te = f / 10;
	tey = f % 10;

	if(tey == 0) {
		printf("20 is %d, 10 is %d,5 is 0, 1 is 0\n",tw,te);
		return 0;
	}

	y = f - te * 10;

	fi = y / 5;
	fiy = y % 5;

	if(fiy == 0) {
		printf("20 is %d, 10 is %d,5 is %d, 1 is 0\n",tw,te,fi);
		return 0;
	}

	z = y - fi * 5;

	st = z / 1;

	printf("20 is %d, 10 is %d, 5 is %d, 1 is %d\n",tw,te,fi,st);
	return 0;
}