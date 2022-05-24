#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	
	printf("Nhap n: ");
	scanf("%d",&number);
	
	int temp = number;
	int originalNum = number;
	int count = 0;
	while(number > 0 )
	{
		number /= 10;
		count++;
	}
	
	int digit;
	int sum = 0;
	while(temp > 0)
	{
		digit = temp % 10;
		sum = sum + pow(digit,count);
		temp /= 10;
	}
	
	if (sum == originalNum)
		printf("%d la so Armstrong",originalNum);
	else 
		printf("%d khong la so Armstrong",originalNum);
	
}