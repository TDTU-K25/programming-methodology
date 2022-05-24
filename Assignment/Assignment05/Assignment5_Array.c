#include <stdio.h>
#include <stdbool.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
	do 
	{
		printf("Nhap n le, n>0: ");
		scanf("%d",&*n);
		if(*n < 0 || *n % 2 == 0)
			printf("Nhap sai. Vui long nhap lai\n");
	} while(*n < 0 || *n % 2 == 0);
}

void NhapMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap gia tri cua phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%4d",a[i]);
	}
}

bool MangTonTaiSoLe(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
			return true;
	}
	return false;
}

bool KiemTraMangCoPhanTuDangXetCoBangTong2PhanTuLienTruocdo (int a[], int n)
{
	int i;
	for(i = 2; i < n; i++)
	{
		if(a[i] == a[i-1] + a[i-2])
			return true;
	}
	return false;
}

void ChenPhanTuxVaoViTrik(int a[], int *n, int x, int vitri)
{
	int i;
	for(i = *n; i > vitri; i--)
	{
		a[i] = a[i-1];
	}
	a[i] = x;
	*n = *n + 1;
}

void SapXepMangGiamDan (int a[], int n)
{
	int i;
	for(i = 0; i < n - 1; i++) 
	{
		int j;
		for(j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void ChenPhanTuVaoMang(int a[], int *n, int x, int vitri)
{
	int i;
	for(i = *n; i > vitri; i--)
	{
		a[i] = a[i-1];
	}
	a[vitri] = x;
	*n = *n + 1;
}

void ChenPhanTuCoGiaTrixMangVanGiamDan(int a[], int *n, int x)
{
	int i = 0;
	ChenPhanTuVaoMang(a,&*n,x,i);
	SapXepMangGiamDan(a,*n);
}

void XoaPhanTuTrongMang(int a[], int *n, int vitri)
{
	int i;
	for(i = vitri; i < *n; i++)
	{
		a[i] = a[i+1];
	}
	*n = *n - 1;
}

void XoaCacPhanTuLonHonx(int a[], int *n, int x)
{
	int i;
	for(i = *n-1; i >= 0; i--)
	{
		if(a[i] > x)
			XoaPhanTuTrongMang(a,&*n,i);
	}
}



int main()
{
	int choice;
	int n, a[MAX], x, k;
	do
	{
	
		printf("\n----------MENU----------");
		printf("\n1. Kiem tra mang co ton tai so le khong?");
		printf("\n2. Kiem tra xem mang co thoa dieu kien gia tri cua phan tu dang xet bang tong 2 phan tu lien truoc do");
		printf("\n3. Chen phan tu co gia tri x vao vi tri k cho truoc trong mang");
		printf("\n4. Sap xep mang giam dan");
		printf("\n5. Chen phan tu co gia tri x vao mang sao cho mang van duoc sap giam dan");
		printf("\n6. Xoa tat ca phan tu co gia tri lon hon x");
		printf("\n10. Nhap x");
		printf("\n11. Nhap vi tri muon chen phan tu x vao");
		printf("\n12. Nhap va xuat mang");
		printf("\n99. Nhap so phan tu cho mang");
		printf("\n0. Thoat");
		printf("\nVui long chon so: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 0: 
				break;
			case 1: 
				printf("\n1. ");
				if(MangTonTaiSoLe(a,n) == true)
					printf("Mang co ton tai so le\n");	
				else 
					printf("Mang khong ton tai so le\n");
				break;
			case 2: 
				printf("2. ");
				if(KiemTraMangCoPhanTuDangXetCoBangTong2PhanTuLienTruocdo(a,n))
					printf("Mang co thoa dieu kien gia tri cua phan tu dang xet bang tong 2 phan tu lien truoc do\n");
				else
					printf("Mang khong thoa dieu kien gia tri cua phan tu dang xet bang tong 2 phan tu lien truoc do\n");
				break;
			case 3: 
				ChenPhanTuxVaoViTrik(a,&n,x,k);
				printf("Mang la: ");
				XuatMang(a,n);
				break;
			case 4: 
				SapXepMangGiamDan(a,n);
				printf("4. Sap xep mang giam dan: \n");
				XuatMang(a,n);
				break;
			case 5:
				printf("5. Mang sau khi chen phan tu co gia tri x sao cho mang van giam dan la: ");
				ChenPhanTuCoGiaTrixMangVanGiamDan(a,&n,x);
				XuatMang(a,n);
				break;
			case 6:
				printf("6. Mang sau khi xoa cac phan tu co gia tri lon hon x la: ");
				XoaCacPhanTuLonHonx(a,&n,x);
				XuatMang(a,n);
				break;
			case 10: 
				printf("\nNhap x: ");
				scanf("%d",&x);
				break;
			case 11: 
				printf("Nhap vi tri muon chen phan tu x vao: ");
				scanf("%d",&k);
				break;	
			case 12:
				NhapMang(a,n);
				printf("Mang la: ");
				XuatMang(a,n);
				break;
			case 99: 
				NhapSoPhanTu(&n);
				break;
			default:
				printf("\n Nhap sai. Vui long nhap lai");
		}
	} while (choice != 0);


}
