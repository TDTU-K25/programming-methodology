#include <stdio.h>
#include <stdbool.h>

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

bool is_Prime_num(int n)
{
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void main()
{
	int n = nhapn();
	if(is_Prime_num(n))
		printf("%d la so nguyen to",n);
	else 
		printf("%d khong la so nguyen to",n);
}