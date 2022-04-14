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

void SNTtu1denN(int N)
{
	int i;
	for(i = 1; i <= N; i++)
	{
		if(i == 1)
			continue;
		if(is_Prime_num(i))
			printf("%d ",i);
	}
}

void main()
{
	int n = nhapn();
	printf("Cac so nguyen to tu 1 den %d la: ",n);
	SNTtu1denN(n);
}