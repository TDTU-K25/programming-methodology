#include <stdio.h>

int LayChuSoThuHaiTrongMa(int MaKhachHang) 
{
	MaKhachHang /= 1000;
	MaKhachHang %= 10;
	return 	MaKhachHang;
}

void HangKhachHangThanThiet(int MaKhachHang)
{
	if(LayChuSoThuHaiTrongMa(MaKhachHang) >= 0 && LayChuSoThuHaiTrongMa(MaKhachHang) <= 2)
		printf("Xep hang khach hang hang Dong");
	else
	{
		if(LayChuSoThuHaiTrongMa(MaKhachHang) >= 3 && LayChuSoThuHaiTrongMa(MaKhachHang) <= 5)
			printf("Xep hang khach hang hang Bac");
		else
		{
			if(LayChuSoThuHaiTrongMa(MaKhachHang) >= 6 && LayChuSoThuHaiTrongMa(MaKhachHang) <= 7)
				printf("Xep hang khach hang hang Vang");
			else 
				printf("Xep hang khach hang hang Bach kim");
		}
	}
}

void main()
{
	int MaKhachHang;
	printf("Nhap ma khach hang: ");
	scanf("%d",&MaKhachHang);
	if(MaKhachHang < 10000 || MaKhachHang > 99999)
	{
		printf("Nhap du lieu sai.\n");
	}	
	else
	{
		HangKhachHangThanThiet(MaKhachHang);
	}
}
