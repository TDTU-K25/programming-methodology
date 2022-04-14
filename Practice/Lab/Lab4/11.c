#include <stdio.h>
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

void SoPhanTuTrungLap(int a[], int n)
{
	int i, j;
	int freq[MAX];
	for(i = 0; i < n - 1; i++)
	{
		int count = 1;
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				count++;
				freq[j] = -1;
			}
		}
		if(freq[i] != -1)
		{
			printf("\nChu so %d bi lap %d lan",a[i],count);
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
	printf("\nTong so phan tu trung lap trong mang la");
	SoPhanTuTrungLap(a,n);
}
