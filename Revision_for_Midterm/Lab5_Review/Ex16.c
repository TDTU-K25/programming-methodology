#include <stdio.h>
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
		printf("%d ",a[i]);
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
	NhapSoPhanTu(&n);
	int a[MAX];
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	DaoMang(a,n);
	printf("\nMang sau khi dao la: ");
	XuatMang(a,n);
}
