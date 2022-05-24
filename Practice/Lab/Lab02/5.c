#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int lastDigit = number % 10;
	
	while(number > 9)
	{
		number /= 10;
	}
	
	printf("Chu so dau tien la %d",number);
	printf("\nChu so cuoi cung la %d",lastDigit);
}