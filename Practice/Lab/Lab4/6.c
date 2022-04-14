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

int TongCacPhanTuChanTrongMang(int a[], int n)
{
	int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
			sum += a[i];
	}
	return sum;
}

void main()
{
	int n;
	int a[MAX];
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	printf("\nTong cac phan tu chan trong mang la %d",TongCacPhanTuChanTrongMang(a,n));
}
