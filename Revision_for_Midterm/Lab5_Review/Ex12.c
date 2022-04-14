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

int	MinTrongMang(int a[], int n)
{
	int i;
	int min = a[0];
	for(i = 0; i < n; i++)
	{
		if(min > a[i])
			min = a[i];
	}
	return min;
}

void main()
{
	int n;
	NhapSoPhanTu(&n);
	int a[MAX];
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	printf("\nGia tri nho nhat trong mang la %d",MinTrongMang(a,n));
}
