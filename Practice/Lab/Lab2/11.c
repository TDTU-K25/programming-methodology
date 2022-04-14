#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int temp = number;
	int count = 0;
	while(temp > 0)
	{
		temp /= 10;
		count++;
	}
	
	count -= 1;
	
	int originalNum = number;
	int digit;
	int reverseNum = 0;
	int i = 0;
	while(number > 0)
	{
		digit = number % 10;
		reverseNum = reverseNum + digit * pow(10,count);
		count--;
		number /= 10;
	}
	
	if(reverseNum == originalNum)
		printf("%d la so palindrome",originalNum);
	else 
		printf("%d khong la so palindrome",originalNum);
	
}