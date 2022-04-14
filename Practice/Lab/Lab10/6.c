#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 100
#define MAX_STUDENT 200

typedef struct
{
	char studentID[MAX_CHAR];
	char fullName[MAX_CHAR];
	char pointPPLT[MAX_CHAR];
	char pointDSTT[MAX_CHAR];
	char pointMathInIT[MAX_CHAR];
	double averagePoint;
	char classification[MAX_CHAR];
} SinhVien;

void nhapSoLuongSinhVien(int *n)
{
	do
	{
		printf("Nhap so luong sinh vien: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai, nhap lai!\n");
	} while(*n <= 0);
}

void enterInfo(SinhVien sinhVienList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nNhap thong tin sinh vien thu %d",i+1);	
		printf("\nNhap MSSV: "); fgets(sinhVienList[i].studentID, MAX_CHAR, stdin);
		printf("Nhap Ho va ten: "); fgets(sinhVienList[i].fullName, MAX_CHAR, stdin);
		printf("Nhap diem phuong phap lap trinh: "); fgets(sinhVienList[i].pointPPLT, MAX_CHAR, stdin);
		printf("Nhap diem Dai so tuyen tinh: "); fgets(sinhVienList[i].pointDSTT, MAX_CHAR, stdin);
		printf("Nhap diem Toan cho tin hoc: "); fgets(sinhVienList[i].pointMathInIT, MAX_CHAR, stdin);
	}
}

void printInfo(SinhVien sinhVienList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nThong tin sinh vien thu %d",i+1);
		printf("\nMSSV: %s",sinhVienList[i].studentID); 
		printf("Ho va ten: %s",sinhVienList[i].fullName); 
		printf("Diem phuong phap lap trinh: %s",sinhVienList[i].pointPPLT); 
		printf("Diem Dai so tuyen tinh: %s",sinhVienList[i].pointDSTT); 
		printf("Diem Toan cho tin hoc: %s",sinhVienList[i].pointMathInIT); 
	}
}

void calculateAveragePoint(SinhVien sinhVienList[], int n)
{
	double sum;
	double ave;
	
	int i;
	for(i = 0; i < n; i++)
	{
		sum = 0;
		sum += (atof(sinhVienList[i].pointPPLT) + atof(sinhVienList[i].pointDSTT) + atof(sinhVienList[i].pointMathInIT));
		ave = sum / 3;
		sinhVienList[i].averagePoint = ave;
	}
	
	for(i = 0; i < n; i++) // Print
	{
		printf("\nDiem trung binh tich luy cua sinh vien thu nhat: %lf",sinhVienList[i].averagePoint);
	}
}

void main()
{
	int n;
	nhapSoLuongSinhVien(&n);
	
	char temp; // get newline char
	scanf("%c",&temp);
	
	SinhVien sinhVienList[MAX_STUDENT];
	
	enterInfo(sinhVienList,n);
	printInfo(sinhVienList,n);
	
	calculateAveragePoint(sinhVienList,n);
}