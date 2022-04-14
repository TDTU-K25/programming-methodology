#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int DemSoLuongCacChuSo(int n)
{
	int count = 0;
	while(n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

int SoDao(int n)
{
	int reverseNum = 0;
	int digit;
	int i = DemSoLuongCacChuSo(n);
	i -= 1;
	while(n > 0)
	{
		digit = n % 10;
		reverseNum += digit * pow(10,i);
		i--;
		n /= 10;
	}
	return reverseNum;
}

bool laSHT(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
			sum += i;
	}
	if(sum == n)	
		return true;
	return false;
}

bool laSoDoiXung(int n)
{
	if(SoDao(n) == n)
		return true;
	return false;
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

void InSNT(int n)
{
	int count = 0;
	int i;
	if(laSNT(n))
		printf("\n%d la so nguyen to",n);
	else 
	{
		printf("Cac so nguyen to la tu 1 den %d la ",n);
		for(i = 1; i <= n; i++)
		{	
			if(laSNT(i))
				printf("%4d",i);
		}
	}
}

bool LaSoArmstrong(int n)
{
	int originNum = n;
	int digit;
	int sum = 0;
	int i = DemSoLuongCacChuSo(n);
	while(n > 0)
	{
		digit = n % 10;
		sum += pow(digit,i);
		n /= 10;
	}
	if(sum == originNum)
		return true;
	return false;
}

void main()
{
	int n;
	int count = 1;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n <= 0)
		{
			printf("Nhap sai. Vui long nhap lai.\n");
			count++;
		}
		else 
			break;
	} while(count <= 5);
	
	if(n > 0)
	{
		printf("\nSo dao cua %d la %d",n,SoDao(n));
		
		if(laSHT(n))
			printf("\n%d la SHT",n);
		else 
			printf("\n%d khong la SHT",n);
			
		if(laSoDoiXung(n))
			printf("\n%d la so doi xung",n);
		else 
			printf("\n%d khong la so doi xung",n);
			
		printf("\n");
		InSNT(n);
		
		if(LaSoArmstrong(n))
			printf("\n%d la so Armstrong",n);
		else 
			printf("\n%d khong la Armstrong",n);
	}
	
	return ;
}
