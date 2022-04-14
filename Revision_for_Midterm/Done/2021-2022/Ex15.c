#include <stdio.h>
#include <stdbool.h>

void Nhap2SoNguyenDuong (int *m, int *n)
{
	do
	{
		printf("Nhap so nguyen duong thu nhat: ");
		scanf("%d",&*m);
		printf("Nhap so nguyen duong thu hai: ");
		scanf("%d",&*n);
		if(*m <= 0 || *n <= 0)
			printf("Nhap sai. Vui long nhap lai.\n");
	} while(*m <= 0 || *n <= 0);
} 

void CacUocChungCua2So(int m, int n)
{
	int i;
	printf("\nCac uoc so chung cua %d va %d la ",m,n);
	if(m > n)
	{	
		for(i = 1; i <= m; i++)
		{
			if(n % i == 0 && m % i == 0)
				printf("%4d",i);
		}
	}
	else
	{
		for(i = 1; i <= n; i++)
		{
			if(n % i == 0 && m % i == 0)
				printf("%4d",i);
		}
	}
}

int UCLN(int m, int n)
{
	while(m != n)
	{
		if(m > n)
			m -= n;
		else 
			n -= m;
	}
	return m;
}

int BCNN(int m, int n)
{
	return m*n / UCLN(m,n);
}

int TongCacUocSoNgoaiTruChinhNo(int x)
{
	int i, sum = 0;
	for(i = 1; i < x; i++)
	{
		if(x % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

bool AmicableNum (int m, int n)
{
	if(TongCacUocSoNgoaiTruChinhNo(n) == m && TongCacUocSoNgoaiTruChinhNo(m) == n)
		return true;
	return false;
}

void main()
{
	int m, n;
	Nhap2SoNguyenDuong(&m, &n);
	CacUocChungCua2So(m,n);
	printf("\nUoc chung lon nhat cua %d va %d la %d",m,n,UCLN(m,n));
	printf("\nBoi chung nho nhat cua %d va %d la %d",m,n,BCNN(m,n));
	
	if(AmicableNum(m,n))
		printf("\n%d va %d la cap so ban",m,n);
	else 
		printf("\n%d va %d khong la cap so ban",m,n);
}
