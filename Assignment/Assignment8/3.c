#include <stdio.h>
#define MAX 100

void DocMaTranVuongTuFile(FILE *file_in, int *n, int a[][MAX])
{
	fscanf(file_in,"%d", &*n);
	
	int i, j;
	for(i = 0; i < *n; i++)
	{
		for(j = 0; j < *n; j++)
		{
			fscanf(file_in, "%d", &a[i][j]);
		}
	}
}

void XuatMangRaFile(FILE *file_out, int a[][MAX], int n)
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			fprintf(file_out,"%d ",a[i][j]);
		}
		fprintf(file_out,"\n");
	}
}

int PhanTuLonNhat(int a[][MAX], int n)
{
	int max = a[0][0];
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}

int PhanTuNhoNhat(int a[][MAX], int n)
{
	int min = a[0][0];
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] < min)
				min = a[i][j];
		}
	}
	return min;
}

int TongTungDong(int a[][MAX], int n, int dong)
{
	int j;
	int sum = 0;
	for(j = 0; j < n; j++)
	{
		sum += a[dong][j];
	}
	return sum;
}

int DongCoTongCacPhanTuMax(int a[][MAX], int n)
{
	int dong = 0;
	int max = TongTungDong(a,n,0);
	int i;
	for(i = 0; i < n; i++)
	{
		if(TongTungDong(a,n,i) > max)
		{
			max = TongTungDong(a,n,i);
			dong = i;
		}
	}
	return dong;
}

void main()
{
	FILE *file_in;
	file_in = fopen("matran.txt", "r");
	
	if (file_in == NULL)
	{
		printf("Error!");
		return ;
	}
	
	int a[MAX][MAX];
	int n;
	DocMaTranVuongTuFile(file_in,&n,a);
	fclose(file_in);
	
	FILE *file_out;
	file_out = fopen("output03.txt", "w");
	
	fprintf(file_out,"Ma tran vuong la: \n");
	XuatMangRaFile(file_out,a,n);
	fprintf(file_out,"\nPhan tu lon nhat trong ma tran la: %d",PhanTuLonNhat(a,n));
	fprintf(file_out,"\nPhan tu nho nhat trong ma tran la: %d",PhanTuNhoNhat(a,n));
	fprintf(file_out,"\nDong co tong cac phan tu lon nhat la: %d",DongCoTongCacPhanTuMax(a,n));
	
	fclose(file_out);
	
	return;
}

