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
		
		if(*r <= 0 || *c <= 0 || *r > MAX || *c > MAX)
			printf("Nhap sai. Vui long nhap lai\n");
	}
	while(*r <= 0 || *c <= 0 || *r > MAX || *c > MAX);
}

void NhapMang(int a[][MAX], int r, int c)
{
	int i,j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("Nhap phan tu thu a[%d,%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void XuatMang(int a[][MAX], int r, int c)
{
	int i,j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int DemPhanTuNhoHonx(int a[][MAX], int r, int c, int x)
{
	int i,j, count = 0;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(a[i][j] < x)
				count++;
		}
	}
	return count;
}

bool laSNT(int n)
{
	int i;
	if(n < 2)
		return false;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void lkPhanTuLaSNT(int a[][MAX], int r, int c)
{
	int i,j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(laSNT(a[i][j]))
				printf("%d\t",a[i][j]);
			else 
				printf("-\t");
		}
		printf("\n");
	}
}

int MaxTrongMang(int a[][MAX], int r, int c)
{
	int i,j;
	int max = a[0][0];
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}

bool MangCoTonTaiSoAm(int a[][MAX], int r, int c)
{
	int i,j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			if(a[i][j] < 0)
				return true;
		}
	}
	return false;
}

void TongTungDong(int a[][MAX], int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		int sum = 0;
		for(j = 0; j < c; j++)
		{
			sum += a[i][j];
		}
		printf("\nTong cua dong %d la %d",i,sum);
	}
}

int DongCoTongLonNhat(int a[][MAX], int r, int c)
{
	int i, j, max = a[0][0], max_row = 0;
	for(i = 0; i < r; i++)
	{
		int sum = 0;
		for(j = 0; j < c; j++)
		{
			sum += a[i][j];
		}
		if(sum > max)
		{
			max = sum;
			max_row = i;
		}
	}
	return max_row ;
}

void main()
{
	int choice;
	int a[MAX][MAX];
	int r,c;
	int x;
	
	do
	{
		printf("\n----------MENU----------");
		printf("\n1. Dem cac phan tu co gia tri nho hon x");
		printf("\n2. Liet ke cac phan tu co gia tri la so nguyen to");
		printf("\n3. Tim phan tu max trong mang");
		printf("\n4. Cho biet mang co ton tai so am khong?");
		printf("\n5. Tinh tong tung dong");
		printf("\n6. Tim dong co tong lon nhat");
		printf("\n7. Nhap so dong va so cot");
		printf("\n8. Nhap va xuat mang 2 chieu");
		printf("\n9. Nhap x");
		printf("\n0. Thoat");
		printf("\nVui long chon so: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
				printf("\n1. So cac phan tu co gia tri nho hon %d la %d\n",x,DemPhanTuNhoHonx(a,r,c,x));
				break;
			case 2:
				printf("\n2. Liet ke cac phan tu co gia tri la so nguyen to\n");
				lkPhanTuLaSNT(a,r,c);
				break;
			case 3:
				printf("\n3. Phan tu max trong mang la %d\n",MaxTrongMang(a,r,c));
				break;
			case 4:
				printf("\n4. ");
				if(MangCoTonTaiSoAm(a,r,c))
					printf("Mang co ton tai so am\n");
				else 
					printf("Mang khong ton tai so am\n");
				break;
			case 5: TongTungDong(a,r,c); break;
			case 6: printf("\n6. Dong co tong lon nhat la %d",DongCoTongLonNhat(a,r,c)); break;
			case 7: input(&r,&c); break;
			case 8: 
				NhapMang(a,r,c);
				printf("Mang 2 chieu:\n");
				XuatMang(a,r,c);
				break;
			case 9: 
				printf("Nhap x: ");
				scanf("%d",&x);	
				break;
			case 0:
				break;
			default:
				printf("\n Nhap sai. Vui long nhap lai");
		}
	} while (choice != 0);
}
