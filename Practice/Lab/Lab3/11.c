#include <stdio.h> 
#include <math.h>
#include <stdbool.h>

bool is_Palindrome_num(int n)
{
	int temp = n;
	int count = 0;
	while(temp > 0)
	{
		temp /= 10;
		count++;
	}
	
	count -= 1;
	
	int originalNum = n;
	int digit;
	int reverseNum = 0;
	while(n > 0)
	{
		digit = n % 10; 
		reverseNum = reverseNum + digit * pow(10,count);
		count--;
		n /= 10;
	}
	printf("%d\n",reverseNum);
	if(reverseNum == originalNum)
		return true;
	return false;
}


void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	if(is_Palindrome_num(so))
		printf("%d la so palindrome",so);
	else 
		printf("%d khong la so palindrome",so);
}