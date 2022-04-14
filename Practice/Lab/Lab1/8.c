#include <stdio.h>

int main()
{
	float num1, num2;
	
	printf("Nhap so thu nhat: ");
	scanf("%f",&num1);
	printf("Nhap so thu hai: ");
	scanf("%f",&num2);
	
	if(num1 > num2)
		printf("So lon nhat giua hai so la %.2f",num1);
	else 
		printf("So lon nhat giua hai so la %.2f",num2);
}	
