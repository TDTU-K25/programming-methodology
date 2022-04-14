#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define MAX 100

void input_n(int *n)
{
	do
	{
		printf("Nhap n: ");
		scanf("%d",&*n);
		if(*n <= 0 || *n > MAX)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*n <= 0 || *n > MAX);
}

void TaoMangNgauNhien(int a[][MAX], int n)
{
	int min = 1, max = 9;
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			a[i][j] = (rand() % (max-min+1) + min);
		}
	}
}

void XuatMang(int a[][MAX], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

bool laSNT(int n)
{
	if(n < 2)
		return false;
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int dem_SNT_tren_duong_cheo_phu(int a[][MAX], int n)
{
	int i, count = 0;
	for(i = 0; i < n; i++)
	{
		if(laSNT(a[i][n-1-i]))
			count++;
	}
	return count;
}

void lk_phantu_tamgiacduoi_duong_cheo_chinh(int a[][MAX], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i >= j)
				printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}

int MaxTrongMang (int a[][MAX], int n)
{
	int i, j, max = a[0][0];
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

int ChanDauTrongDuongCheoPhu(int a[][MAX], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i][n-1-i] % 2 == 0)
			return a[i][n-1-i];
	}
	return -1;
}

int PhanTuChanLonNhatTrongDuongCheoPhu(int a[][MAX], int n)
{
	if(ChanDauTrongDuongCheoPhu(a,n) == -1)
		return -1;
	int i, max = ChanDauTrongDuongCheoPhu(a,n);
	for(i = 0; i < n; i++)
	{
		if(a[i][n-1-i] % 2 == 0 && a[i][n-1-i] > max )
			max = a[i][n-1-i];
	}
	return max;
}

void PhanTuMaxCuaTungDong(int a[][MAX], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		int max = a[i][0];
		for(j = 0; j < n; j++)
		{
			if(a[i][j] > max)
				max = a[i][j];
		}
		printf("\nPhan tu max cua dong %d la %d",i,max);
	}
}

int TongPhanTuCoChiSoDongVaChiSoCotLaChan (int a[][MAX], int n)
{
	int i,j;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			for(j = 0; j < n; j = j + 2)
			{
				sum += a[i][j];
			}
		}
		else 
		{
			for(j = 1; j < n; j = j + 2)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}

int TongPhanTuTamGiacTrenDuongCheoChinh(int a[][MAX], int n)
{
	int i,j;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i < j)
				sum += a[i][j];
		}
	}
	return sum;
}

int TongPhanTuTamGiacDuoiDuongCheoPhu(int a[][MAX], int n)
{
	int i,j;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i + j > n - 1)
				sum += a[i][j];
		}
	}
	return sum;
}

int ViTriDongCuaPhanTuDauTienCoGiaTriX(int a[][MAX], int n, int x)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] == x)
				return i;
		}
	}
	return -1;
}

void ViTriPhanTuCoGiaTriLonNhat(int a[][MAX], int n)
{
	int i, j, max = a[0][0], dong = 0, cot = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				dong = i;
				cot = j;		
			}			
		}
	}
	printf("Vi tri dong va cot cua phan tu co gia tri lon nhat tuong ung la %d va %d", dong, cot);
}

int SoLanXuatHienCuaPhanTuTrongMang(int a[][MAX], int n, int x)
{
	int i, j;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(x == a[i][j])
				count++;
		}
	}
	return count;
}

int GiaTriXuatHienNhieuNhatTrongMang(int a[][MAX], int n) // Còn trường hợp số lần xuất hiện của các giá trị bằng nhau
{
	int i, j, dong = 0, cot = 0;
	int max = SoLanXuatHienCuaPhanTuTrongMang(a,n,a[0][0]);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(SoLanXuatHienCuaPhanTuTrongMang(a,n,a[i][j]) > max)
			{
				max = SoLanXuatHienCuaPhanTuTrongMang(a,n,a[i][j]);
				dong = i;
				cot = j;
			}
		}
	}
	return a[dong][cot];
}

void Nhan2MaTran(int a[][MAX], int b[][MAX], int c[][MAX], int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	srand(time(NULL));
	
	int n;
	int a[MAX][MAX];
	
	input_n(&n);
	TaoMangNgauNhien(a,n);
	printf("Mang la: \n");
	XuatMang(a,n);
	
	printf("\n1. Dem co bao nhieu so nguyen to tren duong cheo phu");
	printf("\nSo luong cac so nguyen to tren duong cheo phu la %d",dem_SNT_tren_duong_cheo_phu(a,n));
	
	printf("\n2. Liet ke cac phan tu thuoc tam giac duoi cheo chinh\n");
	lk_phantu_tamgiacduoi_duong_cheo_chinh(a,n);
	
	printf("\n3. Phan tu lon nhat trong ma tran la %d",MaxTrongMang(a,n));
	
	if(PhanTuChanLonNhatTrongDuongCheoPhu(a,n) == -1)
		printf("\n4. Duong cheo phu khong co phan tu chan");
	else
		printf("\n4. Phan tu chan lon nhat trong duong cheo phu la %d",PhanTuChanLonNhatTrongDuongCheoPhu(a,n));
		
	printf("\n5. Phan tu max cua tung dong");
	PhanTuMaxCuaTungDong(a,n);
	
	printf("\n6. Tong cac phan tu co chi so dong + chi so cot la so chan la %d",TongPhanTuCoChiSoDongVaChiSoCotLaChan(a,n));
	
	printf("\n7. Tong cac phan tu thuoc tam giac tren cua duong cheo chinh la %d",TongPhanTuTamGiacTrenDuongCheoChinh(a,n));
	
	printf("\n8. Tong cac phan tu thuoc tam giac duoi cua duong cheo phu la %d",TongPhanTuTamGiacDuoiDuongCheoPhu(a,n));
	
	int x;
	printf("\nNhap x: ");
	scanf("%d",&x);
	if(ViTriDongCuaPhanTuDauTienCoGiaTriX(a,n,x) == -1)
		printf("\nKhong co phan tu nao co gia tri %d",x);
	else 
		printf("\nDong cua phan tu dau tien co gia tri %d la %d",x,ViTriDongCuaPhanTuDauTienCoGiaTriX(a,n,x));
		
	printf("\n10. ");
	ViTriPhanTuCoGiaTriLonNhat(a,n);
	
	printf("\n11. Gia tri xuat hien nhieu nhat trong mang la %d",GiaTriXuatHienNhieuNhatTrongMang(a,n));
	
	int b[MAX][MAX];
	int c[MAX][MAX];
	TaoMangNgauNhien(b,n);
	printf("\nMang B la: \n");
	XuatMang(b,n);
	printf("\n12. Ket qua khi nhan 2 ma tran la: \n");
	Nhan2MaTran(a,b,c,n);
}
