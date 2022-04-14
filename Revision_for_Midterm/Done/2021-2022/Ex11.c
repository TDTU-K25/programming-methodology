#include <stdio.h>
#include <math.h>

float caua(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)(i+1) / sqrt(i);
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
		sum += (float)1 / i;
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
	for(i = 0; i <= n; i++)
	{
		sum += (float)1 / (i+5);
	}
	return sum;
}

float cauf(int n)
{
	int i;
	float sum = 0;
	for(i = 2; i <= n; i = i + 2)
	{
		sum += (float)1 / i;
	}
	return sum;
}

float caug(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)1 / (i*(i+1));
	}
	return sum;
}

float cauh(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += pow((-1),i) / i;
	}
	return sum;
}

void main()
{
	int n;
	do
	{
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n <= 0)
		printf("Nhap sai. Vui long nhap lai.\n");
	} while(n <= 0);
	
	printf("\na) Ket qua la %f",caua(n));
	printf("\nb) Ket qua la %d",caub(n));
	printf("\nc) Ket qua la %f",cauc(n));
	printf("\nd) Ket qua la %d",caud(n));
	printf("\ne) Ket qua la %f",caue(n));
	printf("\nf) Ket qua la %f",cauf(n));
	printf("\ng) Ket qua la %f",caug(n));
	printf("\nh) Ket qua la %f",cauh(n));
}
