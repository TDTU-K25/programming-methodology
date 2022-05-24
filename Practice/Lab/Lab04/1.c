#include <stdio.h>
float caua(int n);
int caub(int n);
int factorial(int n);
int cauc(int n);
int caud(int n);
float caue(int n);

void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Cau 1.\n");
	printf("Cau a: Ket qua la %.2f\n",caua(n));
	printf("Cau b: Ket qua la %d\n",caub(n));
	printf("Cau c: Ket qua la %d\n",cauc(n));
	printf("Cau d: Ket qua la %d\n",caud(n));
	printf("Cau e: Ket qua la %.2f\n",caue(n));
}

float caua(int n)
{
	int i;
	float sum = 0;
	for(i = 1; i <=n ; i++)
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

int factorial(int n)
{
	int i, product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

int cauc(int n)
{
	int i, sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += (factorial(i) + 1);
	}
	return sum;
}

int caud(int n)
{
	int i, product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= factorial(i);
	}
	return product;
}

float caue(int n)
{
	int i;
	float product = 1;
	for(i = 1; i <= n; i++)
	{
		product *= (float)2*i / 3;
	}
	return product;
}