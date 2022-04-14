#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void XoaKyTuTrongChuoi(char str[], int *len, int position)
{
	int i;
	for(i = position; i < *len; i++)
	{
		str[i] = str[i+1];
	}
	str[i] = '\0';
	*len = *len - 1;
}

void delete_n_character(char str[], int *len, int n, int position)
{
	int i;
	for(i = 0; i < n; i++)
	{
		XoaKyTuTrongChuoi(str,&*len,position);
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
	
	int n;
	printf("Nhap so ki tu muon xoa la: ");
	scanf("%d",&n);
	
	int position;
	printf("Nhap vi tri bat dau xoa: ");
	scanf("%d",&position);
	
	delete_n_character(str,&len,n,position);
	printf("Chuoi sau khi xoa %d ki tu tu vi tri %d la: ",n,position);
	puts(str);
}
