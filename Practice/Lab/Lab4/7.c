#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void NhapMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}

void NhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d",&*n);
	} while(*n < 0 || *n > MAX);
}

void XuatMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%5d",a[i]);
	}
}

void HoanVi(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void DaoMang(int a[], int n)
{
	int i;
	for(i = 0; i < n/2; i++)
	{
		HoanVi(&a[i],&a[n-1-i]);
	}
}

void main()
{
	int n;
	int a[MAX];
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	DaoMang(a,n);
	printf("\nMang sau khi dao la: ");
	XuatMang(a,n);
}
