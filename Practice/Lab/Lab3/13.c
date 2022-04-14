#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_Armstrong_num(int n)
{
	int temp = n;
	int originalNum = n;
	
	int count = 0;
	while(temp > 0 )
	{
		temp /= 10;
		count++;
	}
	
	int digit;
	int sum = 0;
	while(n > 0)
	{
		digit = n % 10;
		sum = sum + pow(digit,count);
		n /= 10;
	}
	if(sum == originalNum)
		return true;
	return false;
}

void main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(is_Armstrong_num(n))
		printf("%d la so Armstrong",n);
	else 
		printf("%d khong la so Armstrong",n);
}