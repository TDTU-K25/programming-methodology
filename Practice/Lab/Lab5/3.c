#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void firstName (char str[], int len)
{
	int i;
	for(i = len - 1; ; i--)
	{
		if(str[i] == ' ')
			break;
	}
	int j;
	printf("Ten: ");
	for(j = i + 1; ; j++)
	{
		if(str[j] == '\0')
			break;
		printf("%c",str[j]);
	}
}

void lastName (char str[])
{
	int i;
	printf("Ho: ");
	for(i = 0; str[i] != ' '; i++)
	{
		printf("%c",str[i]);
	}
}

void main()
{
	char str[MAX];
	printf("Nhap ho va ten: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Ho va ten da nhap la: ");
	puts(str);
	
	int len = strlen(str);
	
	lastName(str);
	printf("\n");
	firstName(str,len);
}
