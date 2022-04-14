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

int DemChan(int a[], int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
			count++;
	}
	return count;
}

int DemLe(int a[], int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
			count++;
	}
	return count;
}

void TachMang(int a[], int n)
{
	int chan[DemChan(a,n)], le[DemLe(a,n)];
	int c = 0, l = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			chan[c]  = a[i];
			c++;
		}
		else 
		{
			le[l]  = a[i];
			l++;
		}
	}
	printf("\nMang chan la: ");
	for(i = 0; i < c; i++)
	{
		printf("%5d",chan[i]);
	}
	printf("\nMang le la: ");
	for(i = 0; i < l; i++)
	{
		printf("%5d",le[i]);
	}
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
	
	TachMang(a,n);
	
	free(a);
}
