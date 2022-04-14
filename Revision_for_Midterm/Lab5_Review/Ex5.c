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

bool LaSHT(int n)
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

void main()
{
	int n;
	input(&n);
	
	if(LaSHT(n))
		printf("%d la SHT",n);
	else 
		printf("%d khong la SHT",n);
	
}
