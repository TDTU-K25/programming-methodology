#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int originalNum = number;
	int lastDigit = number % 10;
	int count = 1;
	
	while(number > 9)
	{
		number = number / 10;
		count++;
	}
	
	int result = lastDigit * (int)pow(10,count - 1) + originalNum % (int)pow(10,count - 1) - lastDigit + number;
	
	printf("Ket qua la %d",result);

}