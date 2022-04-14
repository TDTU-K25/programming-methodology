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
		printf("%d ",a[i]);
	}
}

bool LaSNT(int n)
{
	if(n < 2)
		return false;
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void Xoa1PhanTuTrongMang(int a[], int *n, int vitri)
{
	int i;
	for(i = vitri; i < *n; i++)
	{
		a[i] = a[i+1];
	}
	*n = *n - 1;
}

void XoaPhanTuCoViTriCuThe(int a[], int *n)
{
	int k;
	do
	{
		printf("\nNhap vi tri muon xoa: ");
		scanf("%d",&k);
		if(k >= *n)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(k >= *n);
	Xoa1PhanTuTrongMang(a,&*n,k);
}

void XoaCacSNT(int a[], int *n)
{
	int i;
	for(i = *n - 1; i >= 0; i--)
	{
		if(LaSNT(a[i]))
		{
			Xoa1PhanTuTrongMang(a,&*n,i);
		}		
	}
}

void Them1PhanTuVaoMang(int a[], int *n, int x, int vitri)
{
	int i;
	for(i = *n; i > vitri; i--)
	{
		a[i] = a[i-1];
	}
	a[vitri] = x;
	*n = *n + 1;
}

void ThemVaoSauSNT(int a[], int *n)
{
	int y;
	printf("Nhap y: ");
	scanf("%d",&y);
	int i;
	for(i = *n-1; i >= 0; i--)
	{
		if(LaSNT(a[i]))
			Them1PhanTuVaoMang(a,&*n,y,i+1);
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
	
	ThemVaoSauSNT(a,&n);
	printf("\nMang sau khi them y sau cac SNT la: ");
	XuatMang(a,n);
}
