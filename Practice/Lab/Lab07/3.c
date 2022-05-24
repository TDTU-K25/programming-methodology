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

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int a[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		int max = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] > a[max])
				max = j;
		}
		swap(&a[i],&a[max]);
	}
}

void main()
{
	int a[MAX], n;
	
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	printf("\nMang sau khi sap xep la: ");
	selectionSort(a,n);
	XuatMang(a,n);
}
