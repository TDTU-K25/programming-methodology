#include <stdio.h>

int main()
{
	float celsiusTemp, fahrenheitTemp;
	
	printf("Nhap nhiet do o do C: ");
	scanf("%f",&celsiusTemp);
	
	fahrenheitTemp = 33.8 * celsiusTemp;
	
	printf("Nhiet do o do F la %.2f",fahrenheitTemp);	
}
