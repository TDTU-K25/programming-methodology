#include <stdio.h>
#define MAX 100

int countDuplicate(int a[], int n, int k)
{
	int count = 0;
	
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == k)
			count++;
	}
	return count;
}

void nhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai, nhap lai!\n");
	} while(*n <= 0);
}

void nhapMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}

void xuatMang(int a[], int n)
{
	int i;
	printf("Mang sau khi nhap: ");
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
}

void main()
{
	int n;
	nhapSoPhanTu(&n);
	
	int a[MAX];
	nhapMang(a, n);
	xuatMang(a, n);
	
	int k;
	printf("\nNhap gia tri k: ");
	scanf("%d",&k);
	
	printf("So lan xuat hien cua gia tri %d trong mang la: %d",k,countDuplicate(a,n,k));
}