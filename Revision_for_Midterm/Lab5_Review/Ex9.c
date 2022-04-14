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
	} while(*n <= 0);
}

int DecimalToBinary(int n)
{
	int binary = 0;
	int bit;
	int i = 0;
	while(n > 0)
	{
		bit = n % 2;
		binary += bit * pow(10,i);
		i++;
		n /= 2;
	}
	return binary;
}

void main()
{
	int n;
	input(&n);
	
	printf("So thap phan %d sang so nhi phan la %d",n,DecimalToBinary(n));
}
