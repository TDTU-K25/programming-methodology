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

void Xoa1PhanTuTrongMang(int a[], int *n, int vitri)
{
	int i;
	for(i = vitri; i < *n; i++)
	{
		a[i] = a[i+1];
	}
	*n = *n - 1;
}

void main()
{
	int n;
	int a[MAX];
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	int vitri;
	do
	{
	printf("\nNhap vi tri muon xoa phan tu: ");
	scanf("%d",&vitri);
	if(vitri >= n || vitri < 0)
		printf("Nhap sai. Vui long nhap lai");
	} while(vitri >= n || vitri < 0);
	Xoa1PhanTuTrongMang(a,&n,vitri);
	XuatMang(a,n);
}
