#include <stdio.h>

int main()
{
	float number;
	
	printf("Nhap so: ");
	scanf("%f",&number);
	
	if(number < 0)
		number = number * (-1);
	
	printf("Gia tri tuyet doi cua so do la %.2f",number);
}
