#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void input(int *n)
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&*n);
		if(*n < 0)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*n < 0);
}

int DemChuSo(int n)
{
	int count = 0;
	while(n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

bool LaSoArmstrong(int n)
{
	int originalNum = n;
	int digit;
	int sum = 0;
	int i = DemChuSo(n);
	while(n > 0)
	{
		digit = n % 10;
		sum += pow(digit,i);
		n /= 10;
	}
	if(originalNum == sum)
		return true;
	return false;
}

void LietKeCacSoArmstrong(int n)
{
	int i;
	for(i = 1; i <= n; i++)
	{
		if(LaSoArmstrong(i))
			printf("%d ",i);
	}
}

void main()
{
	int n;
	input(&n);
	
	printf("Cac so Armstrong tu 1 den %d la ",n);
	LietKeCacSoArmstrong(n);
}
