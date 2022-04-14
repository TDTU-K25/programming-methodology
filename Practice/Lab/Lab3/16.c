#include <stdio.h>
#include <math.h>
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

int countDigit(int n)
{
	int count = 0;
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

bool is_armstrong_num(int n)
{
	int temp = n;
	int digit;
	int sum = 0;
	while(temp > 0)
	{
		digit = temp % 10;
		sum = sum + pow(digit,countDigit(n));
		temp /= 10;	
	}
	if(sum == n)
		return true;
	return false;
}

void cacsoArmstrongtu1denN(int N)
{
	int i;
	for(i = 1; i <= N; i++)
	{
		if(is_armstrong_num(i))
			printf("%d ",i);
	}
}

void main()
{
	int n = nhapn();
	printf("Cac so Armstrong tu 1 den %d la: ",n);
	cacsoArmstrongtu1denN(n);
}