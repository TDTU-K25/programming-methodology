#include <stdio.h>

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

int tongcacsole(int j)
{
	int sum = 0;
	int i;
	for(i = 1; i <= j; i +=2)
	{
		sum += i;
	}
	return sum;
}

void main()
{
	int n = nhapn();
	printf("Ket qua la %d",tongcacsole(n));
}