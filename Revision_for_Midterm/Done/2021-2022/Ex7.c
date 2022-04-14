#include <stdio.h>
#include <math.h>

void main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	
	float y1, y2, y3, y4, y5;
	
	y1 = 2 * pow(x,3) + 5 * pow(x,2) + 7 * x + 15;
	y2 = pow(sin(x),2) + pow(cos(2*x),2) + pow(tan(3*x),2);
	y3 = pow(x+10,x+5);
	y4 = 3 * exp(cos(x+1));
	y5 = log10(x+100);
	
	printf("\n%f",y1);
	printf("\n%f",y2);
	printf("\n%f",y3);
	printf("\n%f",y4);
	printf("\n%f",y5);
	
}
