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

void HoanVi(int *m, int *n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
}

void SapXepMangTangDan(int a[], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
				HoanVi(&a[i],&a[j]);
		}
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
	
	SapXepMangTangDan(a,n);
	printf("\nMang sau khi xep tang dan la: ");
	XuatMang(a,n);
	
	free(a);
}
