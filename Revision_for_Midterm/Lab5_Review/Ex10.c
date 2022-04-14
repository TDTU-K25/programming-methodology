#include <stdio.h>

void NhapNgay(int *days)
{
	do
	{
		printf("Nhap so ngay: ");
		scanf("%d",&*days);
		if(*days <= 0)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*days <= 0);
}

void ConvertDays(int days)
{
	int originalDays = days;
	int year = days / 365;
	days %= 365;
	int week = days / 7;
	int day = days % 7;
	printf("%d ngay tuong duong %d nam %d tuan %d ngay",originalDays,year,week,day);
}


void main()
{
	int days;
	NhapNgay(&days);
	
	ConvertDays(days);
}
