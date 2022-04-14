#include <stdio.h>
#include <math.h>
#define PI 3.141593

void main()
{
	float R1, R2, L, h;
	printf("R1: ");
	scanf("%f",&R1);
	printf("R2: ");
	scanf("%f",&R2);
	printf("L: ");
	scanf("%f",&L);
	printf("h: ");
	scanf("%f",&h);
	
	float S, V;
	S = PI * (pow(R1,2) + pow(R2,2) + ((R1 + R2) * L) );
	V = PI * h * (1.0/3) * (pow(R1,2) + pow(R2,2) + R1 * R2);
	
	printf("S = %.4f",S);
	printf("\nV = %.4f",V);
}