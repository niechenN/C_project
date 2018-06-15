#include <stdio.h>
#define PI 3.14159f

int main (void) {
    float r,volume;
    scanf("%f",&r);
    volume = (4.0f / 3.0f) * PI * r * r * r;
    printf("The volume of ball is %.2f\n",volume);
}