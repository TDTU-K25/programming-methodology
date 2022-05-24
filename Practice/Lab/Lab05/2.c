#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void InDaoChuoi(char str[], int len)
{
	int i;
	printf("Chuoi sau khi dao la: ");
	for(i = len - 1; i >= 0; i--)
	{
		printf("%c",str[i]);
	}
}

void main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi da nhap la: ");
	puts(str);
	
	int len = strlen(str);
	
	InDaoChuoi(str,len);
}
