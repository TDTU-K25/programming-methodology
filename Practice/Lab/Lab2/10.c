#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int digit;
	while(number > 0)
	{
		digit = number % 10;
		printf("%d",digit);
		number /= 10;
	}
}