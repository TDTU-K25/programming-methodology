#include <stdio.h>
#include <math.h>

void main()
{
	float x, y;
	printf("Nhap x: ");
	scanf("%f",&x);
	printf("Nhap y: ");
	scanf("%f",&y);
	float S = (3 * pow(x,3) * y - 1.0/2 * pow(x,2) + 1.0/5 * x * y) * 6 * x * pow(y,3); 
	printf("%f",S);
}
