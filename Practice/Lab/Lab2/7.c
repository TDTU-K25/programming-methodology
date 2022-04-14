#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int product = 1;
	int digit;
	while(number > 0)
	{
		digit = number % 10;
		product *= digit;
		number /= 10;
	}
	
	printf("Tich cua cac chu so la: %d",product);
	
}