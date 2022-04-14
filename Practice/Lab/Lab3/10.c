#include <stdio.h>
#include <math.h>

void innguocso(int number)
{
	while(number > 0)
	{
		int digit = number % 10;
		printf("%d",digit);
		number /= 10;
	}
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("So dao nguoc cua %d la ",so);
	innguocso(so);
}