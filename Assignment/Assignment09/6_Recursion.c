#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap so phan tu: ");
		scanf("%d",&*n);
		if(*n <= 0)	
			printf("Nhap sai, nhap lai!\n");
	} while (*n <= 0);
}

void TaoMang(int A[], int n)
{
	int min = 0, max = 9;
	
	static int i = 0; // static variables có thuộc tính bảo toàn giá trị của nó even after they are out of their scope => Do đó static variables bảo toàn giá trị trước đó của nó trong PHẠM VI TRƯỚC ĐÓ của chúng và KHÔNG ĐƯỢC KHỞI TẠO trong phạm vi mới
	if(i == n) // (Đk dừng) i đã đi từ 0 đến n-1
		return;
		
	A[i] = (rand() % (max-min+1)) + min;
	i++; // tăng i lên 1 giá trị
	return TaoMang(A, n);
}

void XuatLtoR(int A[], int n) // đi từ trái sang phải
{
	static int i = 0;
	if(i == n) // (Đk dừng) i đã đi từ 0 đến n-1
		return;
		
	printf("%d ",A[i]);
	i++; // tăng i lên 1 giá trị
	return XuatLtoR(A,n);
}

int DemLe(int A[], int n) // đi từ phải sang trái 
{
	static int count = 0;
    if(n > 0) // đk dừng
    {
        if(A[n-1] % 2 == 1)
 	   		count++;
        DemLe(A,n-1);
    }
	return count;	
}

int TongX(int A[], int n, int X) // đi từ phải sang trái 
{
	static int sum = 0;
    if(n > 0) // đk dừng
    {
        if(A[n-1] > X)
    		sum += A[i];
        TongX(A,n-1,X);
    }
	return sum;
}

float TBinh(int A[], int n) // đi từ phải sang trái
{
	float sum, avg;
	
    if(n == 1) // đk dừng
        sum = A[n-1]; // sum = A[0]
    else 
        sum= A[n-1] + (n-1) * TBinh(A,n-1);
	
    avg = sum / n; // trung bình = tổng giá trị của các phần tử / số phần tử
    return avg;
}

void main()
{
	int A[MAX];
	int n;
	
	srand(time(NULL));
	
	NhapSoPhanTu(&n);
	TaoMang(A,n);
	printf("Mang la: ");
	XuatLtoR(A,n);
	
	printf("\nSo luong cac so le co trong mang: %d",DemLe(A,n));
	
	int X;
	printf("\nNhap X: ");
	scanf("%d",&X);
	
	printf("Tong cac so co gia tri lon hon %d la %d",X,TongX(A,n,X));
	
	printf("\nTrung binh cac so co trong mang la %.2f",TBinh(A,n));
}
