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

bool is_Perfect_num(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
			sum += i;
	}
	if(sum == n)
		return true;
	return false;
}

void SHTtu1denN(int N)
{
	int i;
	for(i = 1; i <= N; i++)
	{
		if(is_Perfect_num(i))
			printf("%d ",i);
	}
}

void main()
{
	int n = nhapn();
	printf("Cac hoan thien tu 1 den %d la: ",n);
	SHTtu1denN(n);
}