#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int sum = 0;
	int digit;
	while(number > 0)
	{
		digit = number % 10;
		sum = sum + digit;
		number /= 10;
	}
	
	printf("Tong cua cac chu so la: %d",sum);
	
}