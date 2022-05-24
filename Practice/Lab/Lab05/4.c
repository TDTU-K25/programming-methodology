#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void Xoa1KiTuTrongChuoi(char str[], int *len, int vitri)
{
	int i;
	for(i = vitri; i < *len; i++)
	{
		str[i] = str[i+1];
	}
	str[i] = '\0';
	*len = *len - 1;
}

void XoaKhoangTrang(char str[], int *len)
{
	int i;
	for(i = *len - 1; i >= 1; i--)
	{
		if(str[i] == ' ' && str[i-1] != ' ')
		{
			continue;
		}
		if(str[i] == ' ')
		{
			Xoa1KiTuTrongChuoi(str,&*len,i);
		}
	}
	if(str[0] == ' ')
		Xoa1KiTuTrongChuoi(str,&*len,0)	;
}

void InHoaKiTuDauTrongTu(char str[], int len)
{
	int i;
	for(i = len - 1; i >= 1; i--)
	{
		if(str[i] != ' ' && str[i-1] == ' ')
			str[i] = toupper(str[i]);
		else 
			str[i] = tolower(str[i]);
	}
	if(str[0] != ' ')
		str[0] = toupper(str[0]);
}

void main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi sau khi nhap la: ");
	puts(str);
	
	int len = strlen(str);
	
	XoaKhoangTrang(str,&len);
	InHoaKiTuDauTrongTu(str,len);
	printf("Chuoi sau khi xu ly la: ");
	puts(str);
}
