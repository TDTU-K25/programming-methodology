#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d",&*n);
		if(*n <= 0)	
			printf("Nhap sai, nhap lai!\n");
	} while (*n <= 0);
}

void TaoMang(int A[], int n)
{
	int min = 0;
	int max = 9;
	int i;
	for(i = 0; i < n; i++)
	{
		A[i] = (rand() % (max-min+1)) + min;
	}
}

void XuatLtoR(int A[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ",A[i]);
	}
}

int DemLe(int A[], int n)
{
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(A[i] % 2 != 0)
			count++;
	}
	return count;
}

int TongX(int A[], int n, int X)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(A[i] > X)
			sum += A[i];
	}
	return sum;
}

float TBinh(int A[], int n)
{
	int i;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		sum += A[i];
	}
	return (float)sum / n;
}

void main()
{
	int A[MAX];
	int n;
	
	srand(time(NULL));
	
	NhapSoPhanTu(&n);
	TaoMang(A,n);
	printf("Mang la: ");
	XuatLtoR(A,n);
	
	printf("\nSo luong cac so le co trong mang: %d",DemLe(A,n));
	
	int X;
	printf("\nNhap X: ");
	scanf("%d",&X);
	
	printf("Tong cac so co gia tri lon hon %d la %d",X,TongX(A,n,X));
	
	printf("\nTrung binh cac so co trong mang la %.2f",TBinh(A,n));
}
