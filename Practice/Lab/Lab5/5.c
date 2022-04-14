#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void GopChuoi(char str1[], char str2[], int *len1, int len2)
{
	int SoKyTuCuaChuoi1 = *len1;
	*len1 += len2;
	int i;
	for(i = SoKyTuCuaChuoi1; i < *len1; i++)
	{
		str1[i] = str2[i+len2-*len1];
	}
	str1[i] = '\0';
}

void main()
{
	char str1[MAX];
	printf("Nhap chuoi thu nhat: ");
	fgets(str1, MAX, stdin);
	XoaKiTuXuongDong(str1);
	printf("Chuoi thu nhat da nhap la: ");
	puts(str1);
	
	char str2[MAX];
	printf("Nhap chuoi thu hai: ");
	fgets(str2, MAX, stdin);
	XoaKiTuXuongDong(str2);
	printf("Chuoi thu hai da nhap la: ");
	puts(str2);
	
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	GopChuoi(str1,str2,&len1,len2);
	printf("Chuoi sau khi gop la %s",str1);
}
