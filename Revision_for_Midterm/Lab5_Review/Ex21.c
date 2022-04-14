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

void GopMang(int a[], int b[], int c[], int n, int m)
{
	int SoPhanTuBanDauCuaMangA = n;
	n += m;
	int i;
	for(i = 0; i < n; i++)
	{
		if(i < SoPhanTuBanDauCuaMangA)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i - SoPhanTuBanDauCuaMangA];
		}
	}
}

void main()
{
	int n;
	NhapSoPhanTu(&n);

	int a[MAX];
	NhapMang(a,n);
	printf("Mang la: ");
	XuatMang(a,n);
	
	printf("\n");
	
	int m;
	NhapSoPhanTu(&m);
	
	int b[MAX];
	NhapMang(b,m);
	printf("Mang la: ");
	XuatMang(b,m);
	
	int c[MAX];
	GopMang(a,b,c,n,m);
	printf("\nMang sau khi gop la: ");
	XuatMang(c,n+m);
}
