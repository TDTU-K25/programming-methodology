#include <stdio.h>

int main()
{
	int number;
	
	do
	{
		printf("Nhap so: ");
		scanf("%d",&number);
		if(number < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(number < 0);
	
	int i;
	int count = 0;
	for(i = 1; i <= number; i++)
	{
		if(number % i == 0)
			count++;
	}
	
	if(count == 2)
		printf("%d la so nguyen to",number);
	else
		printf("%d khong la so nguyen to",number);
		
}