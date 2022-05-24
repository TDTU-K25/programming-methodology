#include <stdio.h>

void main()
{
	int m,h;
	printf("Nhap so gio lam viec cua 1 nhan vien ban hang trong 1 tuan: ");
	scanf("%d",&h);
	printf("Nhap so tien tieu chuan duoc chi tra cho moi gio lam viec: ");
	scanf("%d",&m);
	
	int wage;
	if(h > 0 && h <= 40) 
	{
		wage = h * m;
	}
	else 
	{
		if(h <= 45)
		{
			wage = 40 * m + (h - 40) * m * 1.8;
		}
		else 
		{
			if(h <= 50)
			{
				wage = 40 * m + 5 * 1.8 * m + (h - 45) * 2.5 * m;
			}
			else 
			{
				wage = 40 * m + 5 * 1.8 * m + 5 * 2.5 * m + (h - 50) * 2.6 * m;
			}
		}
	}
	
	printf("Tong so tien ma nhan vien thu nhap duoc trong 1 tuan la: %d",wage);
}
