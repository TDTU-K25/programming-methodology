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
		if(*n <= 0)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*n <= 0);
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

void XoaPhanTuBiLapLaiTrongMang(int a[], int *n)
{
	int i, j;
	for(i = 0; i < *n; i++)
	{
		for(j = i + 1; j < *n; j++)
		{
			if(a[i] == a[j])
			{
				Xoa1PhanTuTrongMang(a,&*n,j);
			}
		}
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
	printf("\nMang sau khi xoa cac phan tu bi lap la: ");
	XoaPhanTuBiLapLaiTrongMang(a,&n);
	XuatMang(a,n);
}
