#include <stdio.h>

int Factorial(int n)
{
	int i;
	int product = 1;
	for(i = 1 ; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

float cauB(int n)
{
	int i;
	float sum = 0;
	for(i = 2; i <= 2*n; i = i + 2)
	{
		sum += 1.0 / Factorial(i);
	}
	return sum;
}

void main()
{
	int n;
	do
	{
		printf("N: ");
		scanf("%d",&n);
		if(n <= 0) 
			printf("Nhap sai, nhap lai\n");
	} while (n <= 0);
	
	float result = cauB(n);
	printf("S = %.6f",result);
}