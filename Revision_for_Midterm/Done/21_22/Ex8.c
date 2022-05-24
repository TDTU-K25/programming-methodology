#include <stdio.h>

void main()
{
	int money;
	int ToTien500000, ToTien100000,  ToTien50000, ToTien20000, ToTien10000;
	printf("Nhap so tien: ");
	scanf("%d",&money);
	if(money % 10000 != 0)
	{
		printf("Nhap du lieu sai");
	}
	else
	{
		ToTien500000 = money / 500000;
		money %= 500000;
		ToTien100000 = money / 100000;
		money %= 100000;
		ToTien50000 = money / 50000;
		money %= 50000;
		ToTien20000 = money / 20000;
		money %= 20000;
		ToTien10000 = money / 10000;
		money %= 10000;
		printf("doi: %d to 500000, %d to 100000, %d to 50000, %d to 20000, %d to 10000",ToTien500000,ToTien100000,ToTien50000,ToTien20000,ToTien10000);
	}	
}
