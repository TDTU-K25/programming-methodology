#include <stdio.h>
#include <stdbool.h>
#define MAX 100

void input(int *r, int *c)
{
	do
	{
		printf("Nhap so dong: ");
		scanf("%d",&*r);
		printf("Nhap so cot: ");
		scanf("%d",&*c);
		if(*r <= 0 || *r > MAX || *c <= 0 || *c > MAX)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*r <= 0 || *r > MAX || *c <= 0 || *c > MAX);
}

void NhapMang(int a[][MAX], int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Nhap phan tu thu [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void XuatMang(int a[][MAX], int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}

void ChuyenVi(int a[][MAX], int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			a[j][i] = a[i][j];
		}
	}
}

void InMangDaChuyenVi(int a[][MAX], int r, int c)
{
	ChuyenVi(a,r,c);
	int i, j;
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int a[MAX][MAX];
	int r, c;
	input(&r,&c);
	NhapMang(a,r,c);
	printf("Mang la: \n");
	XuatMang(a,r,c);
	printf("Mang sau khi chuyen vi la: \n");
	InMangDaChuyenVi(a,r,c);
}
