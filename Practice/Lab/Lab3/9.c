#include <stdio.h>
#include <math.h>

int swap_first_last(int number)
{
	int originalNum = number;
	int lastDigit = number % 10;
	int count = 1;
	
	while(number > 9)
	{
		number /= 10;
		count++;
	}
	
	int ketqua = lastDigit * (int)pow(10,count-1) + originalNum % (int)pow(10,count-1) + number - lastDigit;
	return ketqua;
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("Ket qua la %d",swap_first_last(so));
}
