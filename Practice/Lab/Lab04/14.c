#include <stdio.h>
#include <stdbool.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai. Vui long nhap lai.\n");
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
		printf("%5d",a[i]);
	}
}

bool TimPhanTuTrongMang(int a[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			return true;
		}
	}
	return false;
}

void main()
{
	int n;
	int a[MAX];
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	int PhanTuCanTim;
	printf("\nNhap phan tu can tim: ");
	scanf("%d",&PhanTuCanTim);
	if(TimPhanTuTrongMang(a,n,PhanTuCanTim))
		printf("\nTim thay phan tu %d trong mang",PhanTuCanTim);
	else 
		printf("\nKhong tim thay phan tu %d trong mang",PhanTuCanTim);
}
