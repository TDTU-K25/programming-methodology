#include <stdio.h>
#include <stdbool.h>

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

bool LaSNT(int n)
{
	if(n < 2)
		return false;
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void LietKeCacSNT(int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		if(LaSNT(i))
			printf("%d ",i);
	}
}

void main()
{
	int n;
	input(&n);
	
	printf("Cac so nguyen to tu 1 den %d la ",n);
	LietKeCacSNT(n);
}
