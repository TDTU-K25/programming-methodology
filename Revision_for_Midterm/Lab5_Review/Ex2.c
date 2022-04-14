#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void input(int *n)
{
	do
	{
	printf("Nhap so: ");
	scanf("%d",&*n);
	if(*n <= 0)
		printf("Nhap sai. Vui long nhap lai.\n");
	} while(*n <= 0);
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

bool LaSoPalindrome(int n)
{
	int i = DemChuSo(n);
	i -= 1;
	int originalNum = n;
	int reverseNum = 0;
	int digit;
	while(n > 0)
	{
		digit = n % 10;
		reverseNum += digit * pow(10,i);
		i--;
		n /= 10;
	}
	if(reverseNum == originalNum)
		return true;
	return false;
}

void main()
{
	int n;
	input(&n);
	
	if(LaSoPalindrome(n))
		printf("%d la so Palindrome",n);
	else 
		printf("%d khong la so Palindrome",n);
}
