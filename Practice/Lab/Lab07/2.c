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

void interchangeSort(int a[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
				swap(&a[i],&a[j]);
		}
	}
}

int binarySearch(int a[], int n, int k)
{
	interchangeSort(a,n);
	int left = 0, right = n - 1, mid;
	do
	{
		mid = (left + right) / 2;
		if(a[mid] == k)
			return mid;
		else
		{
			if(a[mid] > k)
				right = mid - 1;
			else 
				left = mid + 1;
		}
	} while(left <= right);
	return -1;
}

void main()
{
	int a[MAX], n;
	
	NhapSoPhanTu(&n);
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	printf("\nMang sau khi sap xep la: ");
	interchangeSort(a,n);
	XuatMang(a,n);
	
	int k;
	printf("\nNhap gia tri can tim: ");
	scanf("%d",&k);
	
	if(binarySearch(a,n,k) != -1)
		printf("%d nam o vi tri %d trong mang",k,binarySearch(a,n,k));
	else
		printf("%d khong ton tai trong mang",k);
}
