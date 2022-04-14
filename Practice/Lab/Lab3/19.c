#include <stdio.h>

int factorial_of_n (int n)
{
	int product = 1;
	int i;
	for(i = 1; i <= n; i++)
	{
		product *= i;
	}
	return product;
}

int nhapn()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
		if( n < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while (n < 0);
	return n;
}

void main()
{
	int n = nhapn();
	printf("Giai thua cua %d la: %d",n,factorial_of_n(n));
}