#include <stdio.h>
#include <math.h>

void input(int *n)
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while (*n <= 0);
}

float caua(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)(i+1)/sqrt(i);
	}
	return sum;
}

int caub(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

float cauc(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += 1.0/i;
	}
	return sum;
}

int caud(int n)
{
	int i;
	int product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

float caue(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)pow(-1,i) / i;
	}
	return sum;
}

void main()
{
	int n;
	input(&n);
	printf("\na) S1 = %.4f",caua(n));
	printf("\nb) S2 = %d",caub(n));
	printf("\nc) S3 = %f",cauc(n));
	printf("\nd) S4 = %d",caud(n));
	printf("\ne) S4 = %f",caue(n));
}
