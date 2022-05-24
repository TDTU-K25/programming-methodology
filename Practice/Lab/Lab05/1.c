#include <stdio.h>
#include <string.h>
#define MAX 100

int DemKyTu(char str[]);
void XoaKiTuXuongDong(char str[]);

void main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi da nhap la: ");
	puts(str);

	printf("Chuoi co %d ky tu",DemKyTu(str));
}

int DemKyTu(char str[])
{
	int i, dem = 1;
	for(i = 0; str[i] != '\0'; i++)
	{
		dem++;
	}
	return dem-1;
}

void XoaKiTuXuongDong(char str[])
{
	int len = DemKyTu(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

