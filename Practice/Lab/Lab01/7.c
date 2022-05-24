#include <stdio.h>

int main()
{
	int year;
	
	printf("Nhap nam: ");
	scanf("%d",&year);
	
	if (year % 4 == 0)
		printf("Day la nam nhuan");
	else
		printf("Day khong phai la nam nhuan");
}