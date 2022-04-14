#include <stdio.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai, nhap lai!\n");
	} while(*n <= 0);
}

void NhapMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
}

int linearSearch(int a[], int n, int k)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == k)
			return i;
	}
	return -1;
}

void main()
{
	int a[MAX], n;
	
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
		
	int k;
	printf("\nNhap gia tri can tim: ");
	scanf("%d",&k);
	
	if(linearSearch(a,n,k) != -1)
		printf("%d nam o vi tri %d trong mang",k,linearSearch(a,n,k));
	else
		printf("%d khong ton tai trong mang",k);
}
