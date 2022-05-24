#include <stdio.h>

int tichcacchuso(int number)
{
	int product = 1;
	while(number > 0)
	{
		int digit = number % 10;
		product *= digit;
		number /= 10;
	}
	return product;
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("Tong cac chu so cua %d la %d",so,tichcacchuso(so));
}