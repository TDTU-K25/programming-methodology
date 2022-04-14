#include <stdio.h>

void input(int *n)
{
	do
	{
	printf("Nhap n: ");
	scanf("%d",&*n);
	if(*n <= 0)
		printf("Nhap sai. Vui long nhap lai.\n");
	} while(*n <= 0);
}

float caua(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)i / 2;
	}
	return sum;
}

int caub(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (2*i + 1);
	}
	return sum;
}

float cauc(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (float)(i+1) / (i+2);
	}
	return sum;
}

int giaithua(int n)
{
	int i, product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

int caud(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (giaithua(i) + 1);
	}
	return sum;
}

int caue(int n)
{
	int i;
	int product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

int cauf(int n)
{
	int i;
	int product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= giaithua(i);
	}
	return product;
}

float caug(int n)
{
	int i;
	float product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= (float)(2*i) / 3;
	}
	return product;
}

float cauh(int n)
{
	int i;
	float product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= (float)(i-1) / (i+1);
	}
	return product;
}

void main()
{
	int n;
	input(&n);
	
	printf("\na) Ket qua la %.1f",caua(n));
	printf("\nb) Ket qua la %d",caub(n));
	printf("\nc) Ket qua la %.2f",cauc(n));
	printf("\nd) Ket qua la %d",caud(n));
	printf("\ne) Ket qua la %d",caue(n));
	printf("\nf) Ket qua la %d",cauf(n));
	printf("\ng) Ket qua la %.2f",caug(n));
	printf("\nh) Ket qua la %.2f",cauh(n));
}
