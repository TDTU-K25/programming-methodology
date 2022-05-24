#include <stdio.h>

void chuso_dau_cuoi(int number)
{
	int originalNum = number;
	int lastDigit = number % 10;
	while(number > 9)
	{
		number /= 10;
	}
	printf("Chu so dau tien cua %d la %d\n",originalNum,number);
	printf("Chu so cuoi cung cua %d la %d\n",originalNum,lastDigit);
}

void main()
{
	int so;
	printf("Nhap so :");
	scanf("%d",&so);
	chuso_dau_cuoi(so);
}