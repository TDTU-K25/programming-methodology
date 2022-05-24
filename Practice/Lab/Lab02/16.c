#include <stdio.h>
#include <math.h>

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

int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(n < 0);
	
	// for 
	for(int i1 = 1; i1 <= n; i1++)
	{
		if(is_armstrong_num(i1) == true)
			printf("%d ",i1);
	}
	
	printf("\n");
	
	// while
	int i2 = 1;
	while(i2 <= n)
	{
		if(is_armstrong_num(i2) == true)
			printf("%d ",i2);
		i2++;
	}
	
	printf("\n");
	
	// do while 
	int i3 = 1;
	do 
	{
		if(is_armstrong_num(i3) == true)
			printf("%d ",i3);
		i3++;
	} while(i3 <= n);
}