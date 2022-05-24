#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int input()
{	
	int n;
	do
	{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n < 0 || n >10)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while (n < 0 || n > 10);
	return n;
}

void TaoMangNgauNhienDuong(int a[], int n)
{
	int min = -10, max = 10;
	int i;
	for(i = 0; i <= n-1; i++)
	{
		a[i] = (rand()%(max-min+1)) + min; // rand() tạo 1 số ngẫu nhiên
	}
}

void XuatToanBoMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%5d",a[i]);
	}
}

bool laSNT(int n)
{
	if(n < 1)
		return false;
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

int SNTcuoi (int a[], int n)
{
	int i;
	for(i = n - 1; i >= 0; i--)
	{
		if(a[i] == 1)
			continue;
		if(laSNT(a[i]) == true)
			return a[i];
	}
}

int TongPhanTuChanOViTriChan (int a[], int n)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i = i + 2)
	{
		if(a[i] < 0)
			continue;
		if(a[i] % 2 == 0)
			sum = sum + a[i];
	}
	return sum;
}

int MaxTrongMang(int a[], int n)
{
	int max = a[0];
	int i;
	for(i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int ViTriSNT(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(laSNT(a[i]))
			return i;
	}
}

int TongSNTtrongMang(int a[], int n)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == 1)
			continue;
		if(laSNT(a[i]) == true)
			sum = sum + a[i];
	}
	return sum;
}

int GiaTriAmCuoiTrongMang(int a[], int n)
{
	int i;
	for(i = n - 1; i >= 0; i--)
	{
		if(a[i] < 0)
			return a[i];
	}
}

int DemCacGiaTriNhoHonX(int a[], int n, int x)
{
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < x)
			count++;
	}
	return count;
}

int TongGiaTriNamTaiViTriLaSNT(int a[], int n)

{
	int i;
	int sum = 0;
	for(i = 0; i < n; i++)
	{
		if(laSNT(i))
			sum += a[i];
	}
	return sum;
}

bool CoTonTaiGiaTriAmKePhanTuCuoi(int a[], int n)
{
	if(a[n-2] < 0)
		return true;
	else
		return false;
}

void ListCacGiaTriNhoHonX(int a[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] < x)
			printf("%d ",a[i]);
	}
}

bool MangCoTonTaiItNhat2GiaTriAm(int a[], int n)
{
	int i;
	int count = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < 0)
			count++;
	}
	if(count >= 2)
		return true;
	return false;
}

int TongUocSoPhanTuChanTrongMang(int a[], int n)
{
	int sum = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			int k;
			for(k = 1; k <= a[i]; k++)
			{
				if(a[i] % k == 0)
					sum = sum + k;
			}
		}
	}
	return sum;
}

void SapXepMangTangDan(int a[], int n)
{
	int i;
	for(i = 0; i < n - 1; i++)
	{
		int j;
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j]) 
			{
				int temp = a[i]; 
				a[i] = a[j]; 
				a[j] = temp;
			}
		}
	}
}

void TaoMangCoPhanTuGiongMangBanDau(int a[], int b[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
}

void TaoMangCacGiaTriNhoHonX (int a[], int c[], int n, int x)
{
	int i;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] < x)
		{
			c[j] = a[i];
			j++;
		}
	}
}

void ListCacSNTtrongMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{	
		if(a[i] == 1)
			continue;
		if(laSNT(a[i]))
			printf(" %d ",a[i]);
	}
}

void ChenPhanTuVaoMang(int a[], int *n, int x, int vitri)
{
	int i;
	for(i = *n; i > vitri; i--) // Lưu ý
	{
		a[i] = a[i-1];
	}
	a[vitri] = x;
	*n = *n + 1;
}

void ThemVaoCuoiMang(int a[], int *n, int x)
{
	ChenPhanTuVaoMang(a,&*n,x,0);
}

void ThemSauChan(int a[], int *n, int x)
{
	int i;
	for(i = *n-1; i >= 0; i--) // lưu ý i phải đi ngược nếu không sẽ dính bug 
	{
		if(a[i] % 2 == 0)
		{
			ChenPhanTuVaoMang(a,&*n,x,i+1);
		}
	}
}

void XoaPhanTuTrongMang(int a[], int *n, int vitri)
{
	int i;
	for(i = vitri; i < *n ; i++) // NOTE
	{
		a[i] = a[i+1];
	}
	*n = *n - 1;
}

void XoaChan(int a[], int *n)
{
	int i;
	for(i = *n - 1; i >= 0; i--) // NOTE
	{
		if(a[i] % 2 == 0)
			XoaPhanTuTrongMang(a,&*n,i);
	}
}

int main()
{
	int a[MAX];
	
	srand( (unsigned int) time (NULL)); // sau mỗi lần chạy là thay đổi giá trị ngẫu nhiên
	
	int choice, n, x, c[MAX], b[MAX], y;
	do
	{
		printf("\n---------------Menu---------------");
		printf("\n1. Nhap so phan tu cho mang va xuat mang ra");
		printf("\n2. Tim gia tri so nguyen to cuoi cung trong mang");
		printf("\n3. Tinh tong cac phan tu chan tai vi tri chan");
		printf("\n4. Tim gia tri max trong mang");
		printf("\n6. Tinh tong cac vi tri ma tai do la so nguyen to");
		printf("\n7. Cho biet gia tri am cuoi cung trong mang");
		printf("\n8. Dem xem co bao nhieu gia tri nho hon x");
		printf("\n9. Sap xep mang tang dan");
		printf("\n10. Xoa phan tu cuoi cung trong mang");
		printf("\n11. Kiem tra mang co ton tai it nhat 2 gia tri am khong");
		printf("\n12. Liet ke cac gia tri nam tai vi tri nguyen to");
		printf("\n13. Tinh tong cac uoc so cua nhung phan tu chan trong mang");
		printf("\n14. Liet ke cac gia tri nho hon x");
		printf("\n15. Sap xep cac gia tri nho hon x tang dan");
		printf("\n16. Kiem tra mang co ton tai gia tri am ke phan tu cuoi");
		printf("\n17. Them y vao sau gia tri la so nguyen to");
		printf("\n19. Tinh tong cac phan tu nam tai vi tri so nguyen to");
		printf("\n21. Tao mang moi giong mang ban dau");
		printf("\n99. Nhap x");
		printf("\n100. Nhap y");
		printf("\n0.Thoat");
		printf("\nVui long chon so: ");
		scanf("%d",&choice);

	
		switch(choice)
		{
		case 1: 
			n = input();
			TaoMangNgauNhienDuong(a,n);
			printf("Mang da nhap: ");
			XuatToanBoMang(a, n);
		 	break;
		case 2: printf("\n2. So nguyen to cuoi cung trong mang la %d",SNTcuoi(a,n)); break;
		case 3: printf("\n3. Tong cac phan tu chan o vi tri chan la %d",TongPhanTuChanOViTriChan(a,n)); break;
		case 4: printf("\n4. So lon nhat trong mang la %d",MaxTrongMang(a,n)); break;
		case 6: printf("\n6. Tong cac gia tri nam tai vi tri la so nguyen to la %d",TongGiaTriNamTaiViTriLaSNT(a,n)); break;
		case 7: printf("\n7. Gia tri am cuoi cung trong mang la %d",GiaTriAmCuoiTrongMang(a,n)); break;
		case 99: 
			printf("\nNhap x: ");
			scanf("%d",&x);
			break;
		case 8: printf("8. So cac gia tri nho hon %d la %d",x,DemCacGiaTriNhoHonX(a,n,x)); break;
		case 9: 
			printf("\n9. Sap xep mang tang dan");
			SapXepMangTangDan(a,n);
			XuatToanBoMang(a,n);
			break;
		case 10: 
			printf("\n10. Xoa phan tu cuoi trong mang");
			n -= 1; 
			XuatToanBoMang(a,n);
			break;
		case 11: 
			printf("\n11. ");
			if(MangCoTonTaiItNhat2GiaTriAm(a,n))
				printf("Mang co ton tai it nhat 2 gia tri am");
			else
				printf("Mang khong ton tai it nhat 2 gia tri am");
			break;
		case 12:
			printf("\n12. Liet ke cac so nguyen to trong mang");
			ListCacSNTtrongMang(a,n);
			break;
		case 13: printf("\n13. Tong cac uoc so cua nhung phan tu chan trong mang la %d",TongUocSoPhanTuChanTrongMang(a,n)); break;
		case 14: 
			printf("\n14. Cac gia tri nho hon x la: ");
			ListCacGiaTriNhoHonX(a,n,x);
			break;
		case 15:
			printf("\n15. Sap xep cac gia tri nho hon x tang dan");
			TaoMangCacGiaTriNhoHonX(a,c,n,x);
			SapXepMangTangDan(c,DemCacGiaTriNhoHonX(a,n,x));
			XuatToanBoMang(c,DemCacGiaTriNhoHonX(a,n,x));
			break;
		case 16: 
			printf("\n16."); 
			if(CoTonTaiGiaTriAmKePhanTuCuoi(a,n) == true)
				printf(" Mang co ton tai gia tri am ke phan tu cuoi");
			else 
				printf(" Mang khong ton tai gia tri am ke phan tu cuoi");
			break;
		case 100:
			printf("\nNhap y: ");
			scanf("%d",&y);
			break;
		case 17:
			break;
		case 19: printf("\n19. Tong cac phan tu nam tai vi tri la so nguyen to la %d",TongSNTtrongMang(a,n)); break;
		case 21:
			printf("\n21. Mang moi co cac phan tu giong mang cu");
			TaoMangCoPhanTuGiongMangBanDau(a,b,n);
			XuatToanBoMang(b,n);
		}	
	
	} while (choice != 0);
	return 0;
}
