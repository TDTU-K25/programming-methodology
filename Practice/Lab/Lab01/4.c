#include <stdio.h>

int main()
{
	int specifiedDays, year, week, day;
	
	printf("Nhap ngay cu the: ");
	scanf("%d",&specifiedDays);
	
	year = specifiedDays / 365;
	specifiedDays %= 365;
	
	week = specifiedDays / 7;
	specifiedDays %= 7;
	
	day = specifiedDays;
	
	printf("%d nam %d tuan %d ngay",year,week,day);
}