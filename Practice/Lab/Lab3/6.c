#include <stdio.h>

int tongcacchuso(int number)
{
	int sum = 0;
	while(number > 0)
	{
		int digit = number % 10;
		sum += digit;
		number /= 10;
	}
	return sum;
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("Tong cac chu so cua %d la %d",so,tongcacchuso(so));
}