#include <stdio.h>
#include <math.h>

void main()
{
	float x;
	printf("Nhap x: ");
	scanf("%f",&x);
	
	float f;
	if(x < 0)
		f = sin(x) * cos(5*x);
	else 
	{
		if(x == 0)
			f = pow(5,x);
		else
		{
			if(x < 5)
				f = exp(x);
			else 
				f = pow(5,x) / (x+5);
		}
	}
	printf("Gia tri cua ham so f(x) la %f",f);
}
