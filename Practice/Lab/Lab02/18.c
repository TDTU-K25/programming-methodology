#include <stdio.h>
#include <math.h>

int main()
{
	int decimalNum;
	printf("Nhap so thap phan: ");
	scanf("%d",&decimalNum);
	
	int bit;
	long binaryNum = 0;
	int i = 0;
	while(decimalNum > 0)
	{
		bit = decimalNum % 2;
		binaryNum += bit * (int)pow(10,i);
		i++;
		decimalNum /= 2;
	}
	
	printf("%ld",binaryNum);
}
