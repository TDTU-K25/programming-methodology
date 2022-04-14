#include <stdio.h>
#include <math.h>

int decimal_to_binary(int decimalNum)
{
	int bit;
	int i = 0;
	int binaryNum = 0;
	
	while(decimalNum > 0)
	{
		bit = decimalNum % 2;
		binaryNum = binaryNum + bit * pow(10,i);
		i++;
		decimalNum /= 2;
	}
	return binaryNum;
}

void main()
{
	int decimalNum;
	printf("Nhap so thap phan: ");
	scanf("%d",&decimalNum);
	printf("So thap phan %d sang so nhi phan %d",decimalNum,decimal_to_binary(decimalNum));
}

