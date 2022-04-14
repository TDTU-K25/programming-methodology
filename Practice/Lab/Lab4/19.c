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

bool KiemTraHaiMaTranBangNhau(int a[][MAX], int b[][MAX], int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(a[i][j] != b[i][j])
				return false;
		}
	}
	return true;
}

void main()
{
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	int r, c;
	input(&r,&c);
	NhapMang(A,r,c);
	printf("Ma tran A la: \n");
	XuatMang(A,r,c);
	
	NhapMang(B,r,c);
	printf("\nMa tran B la: \n");
	XuatMang(B,r,c);
	
	if(KiemTraHaiMaTranBangNhau(A,B,r,c))
		printf("\nHai ma tran bang nhau");
	else
		printf("\nHai ma tran khac nhau");
}
