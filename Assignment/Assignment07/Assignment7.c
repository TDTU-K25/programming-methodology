#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

int CountWhiteSpace (char str[])
{
	int len = strlen(str);
	int count = 0;
	int i;
	for(i = 0; i < len; i++)
	{
		if(isspace(str[i]))
			count++;
	}
	return count;
}

void DoiChuThuong (char str[])
{
	int len = strlen(str);
	int i;
	for(i = 0; i < len; i++)
	{
		str[i] = tolower(str[i]);
	}
}

void DoiChuHoa (char str[])
{
	int len = strlen(str);
	int i;
	for(i = 0; i < len; i++)
	{
		str[i] = toupper(str[i]);
	}
}

void HoanVi (char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void DaoChuoi (char str[])
{
	int len = strlen(str);
	int i;
	for(i = 0; i < len / 2; i++)
	{
		HoanVi(&str[i],&str[len-1-i]);
	}
}

bool ChuoiDoiXung (char str[])
{
	int len = strlen(str);
	int i;
	for(i = 0; i < len / 2; i++)
	{
		if(str[i] != str[len-1-i])
			return false;
	}
	return true;
}

void DoiKiTuDauCuaTuTrongChuoi (char str[])
{
	int len = strlen(str);
	int i;
	for(i = 0; i < len - 1; i++)
	{
		if(str[i] == ' ' && str[i+1] != ' ')
		{
			str[i+1] = toupper(str[i+1]);
		}
		else
		{
			str[i+1] = tolower(str[i+1]);
		} 
	}
	if(str[0] != ' ')
		str[0] = toupper(str[0]);
}

int DemSoTuTrongChuoi (char str[])
{
	int word = 0;
	int len = strlen(str);
	int i;
	for(i = 0; i < len - 1; i++)
	{
		if(str[i] == ' ' && str[i+1] != ' ')
			word++;
	}
	if(str[0] != ' ')
		word++;
	return word;
}

void main()
{
	char str[MAX];
	printf("Nhap vao chuoi ki tu: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi ki tu sau khi nhap: ");
	puts(str);
	
	int choice;
	
	do
	{
		
		printf("\n----------MENU----------");
		printf("\n1) Dem so ky tu trang trong chuoi");
		printf("\n21) Doi tat ca ky tu trong chuoi thanh chu thuong");
		printf("\n22) Doi tat ca ky tu trong chuoi thanh chu in hoa");
		printf("\n3) Dao nguoc cac ky tu trong chuoi");
		printf("\n4) Cho biet chuoi co doi xung hay khong");
		printf("\n5) Doi cac ki tu dau cua tu trong chuoi thanh chu hoa, con lai chu thuong");
		printf("\n6) Dem so tu co trong chuoi");
		printf("\n0) Thoat");
		printf("\nVui long chon: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			printf("\n1) So ky tu trang trong chuoi la %d",CountWhiteSpace(str));
			break;
			
			case 21:
			DoiChuThuong(str);
			printf("\n2.1) Chuoi sau khi doi cac ki tu thanh chu thuong: %s",str);
			break;
			
			case 22:
			DoiChuHoa(str);
			printf("\n2.2) Chuoi sau khi doi cac ki tu thanh chu hoa: %s",str);
			break;
					
			case 3:	
			DaoChuoi(str);
			printf("\n3) Ket qua sau khi dao chuoi la %s",str);
			break;
			
			case 4:
			if(ChuoiDoiXung(str))
				printf("\n4) true");
			else
				printf("\n4) false");
			break;
				
			case 5:
			DoiKiTuDauCuaTuTrongChuoi(str);
			printf("\n5) Doi cac ki tu dau cua tu trong chuoi thanh chu hoa, con lai chu thuong: ");
			puts(str);
			break;
			
			case 6:
			printf("6) So tu trong chuoi la %d",DemSoTuTrongChuoi(str));
			break;
			
			default:
				printf("Nhap sai, nhap lai");
		}
		
	} while(choice != 0);
}
