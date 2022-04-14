#include <stdio.h>
#include <stdlib.h>

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

int SoPhanTuLapTrongMang(int a[], int n)
{
	int i, j, count = 0;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				count++;
				break;
			}
		}
	}
	return count;
}

void main()
{
	int n;
	NhapSoPhanTu(&n);
	
	int *a;
	a = calloc(n, sizeof(int));
	
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	printf("\nTong so luong phan tu lap trong mang la %d",SoPhanTuLapTrongMang(a,n));
	
	free(a);
}
