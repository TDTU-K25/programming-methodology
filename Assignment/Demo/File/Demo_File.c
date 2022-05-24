#include <stdio.h>
#define SIZE 100
int TaoFileMang2Chieu(char *FileName, int row, int col);
int DocFileMang2Chieu(char *TenFile, int A[][SIZE], int *row, int *col);
void XuatMang2Chieu(int A[][SIZE], int row, int col);
int TimSoLonNhatTrenDong(int A[][SIZE], int row, int col);
void InSoLonNhatTrenMoiDong(int A[][SIZE], int row, int col);
int main()
{
	srand((unsigned int) time (NULL));
	int row, col, A[SIZE][SIZE];
	char* TenFile = "MaTran.txt";
	printf("Nhap so dong: ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &col);
	if (TaoFileMang2Chieu(TenFile, row, col)==0)
		printf("Khong mo duoc file");
	else
	{
		DocFileMang2Chieu(TenFile,A,&row,&col);
		printf("Mo file Matran.txt de xem ket qua:\n");
		printf("Ma tran doc duoc tu file:\n");
		XuatMang2Chieu(A,row,col);
		printf("So lon nhat tren moi dong:\n");
		InSoLonNhatTrenMoiDong(A, row, col);
	}
	return 0;
}
int TaoFileMang2Chieu(char *FileName, int row, int col)
{
	FILE *f;
	int i,j;
	f = fopen(FileName, "wt");
	if (f == NULL)
		return 0;
	fprintf(f, "%d\n", row);
	fprintf(f, "%d\n", col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			fprintf(f, "%d\t", rand() % 100);
		fprintf(f, "\n");
	}
	fclose(f);
	return 1;
}
int DocFileMang2Chieu(char *TenFile, int A[][SIZE], int *row, int *col)
{
	FILE *f;
	int i, j, temp;
	f = fopen(TenFile, "rt");
	if (f == NULL)
		return 0;	
	fscanf(f, "%d", &*row);
	fscanf(f, "%d", &*col);
	for (i = 0; i<*row; i++)
		for (j = 0; j<*col; j++)
			fscanf(f, "%d", &A[i][j]);
	fclose(f);
	return 1;
}
void XuatMang2Chieu(int A[][SIZE], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%5d", A[i][j]);
		printf("\n");
	}
}
int TimSoLonNhatTrenDong(int A[][SIZE], int row, int col)
{
	int max = A[row][0], k;
	for (k = 1; k < col; k++)
		if (max < A[row][k])
			max = A[row][k];
	return max;
}
void InSoLonNhatTrenMoiDong(int A[][SIZE], int row, int col)
{
	int i,j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%5d", A[i][j]);
		printf("\t\t%5d", TimSoLonNhatTrenDong(A, i, col));
		printf("\n");
	}
}
