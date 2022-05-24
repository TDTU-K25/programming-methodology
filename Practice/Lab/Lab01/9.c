#include <stdio.h>

int main()
{
	float num1, num2, num3;
	
	printf("Nhap so thu nhat: ");
	scanf("%f",&num1);
	printf("Nhap so thu hai: ");
	scanf("%f",&num2);
	printf("Nhap so thu ba: ");
	scanf("%f",&num3);
	
	float max = num1;
	
	if(num2 > max)
		max = num2;
	if(num3 > max)
		max = num3;
		
	printf("So lon nhat giua ba so la %.2f",max);
}