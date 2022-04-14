#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
	char id[10];
	char name[100];
	char sex;
	char birthYear[10];
	char phoneNumber[15];
	int salary;
} Employee;

void removeNewlineChar(char s[])
{
	int len = strlen(s);
	if(s[len-1] == '\n')
		s[len-1] = '\0';
}

void nhapSoLuongNV(int *n)
{
	do
	{
		printf("Nhap so luong nhan vien: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai, nhap lai!\n");
	} while(*n <= 0);
}

void nhapInfoCacNV(Employee employeeList[], int n)
{
	char temp;
	
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nNhap thong tin nhan vien thu %d:\n",i+1);
		printf("Nhap ID: "); scanf("%s",employeeList[i].id);
		
		temp = getchar(); // get the newline char
		
		printf("Nhap ten: "); fgets(employeeList[i].name,100,stdin);
		removeNewlineChar(employeeList[i].name);
		
		printf("Nhap gioi tinh: "); scanf("%c",&employeeList[i].sex);
		printf("Nhap nam sinh: "); scanf("%s",employeeList[i].birthYear);
		printf("Nhap so dien thoai: "); scanf("%s",employeeList[i].phoneNumber);
		printf("Nhap luong: "); scanf("%d",&employeeList[i].salary);
	}
}

void xuatInfoNV(Employee employee)
{
	printf("\nMa nhan vien: %s",employee.id);
	printf("\nHo va ten: %s",employee.name);
	printf("\nGioi tinh: %c",employee.sex);
	printf("\nNam sinh: %s",employee.birthYear);
	printf("\nSo dien thoai: %s",employee.phoneNumber);
	printf("\nLuong: %d",employee.salary);
}

void xuatInfoCacNV(Employee employeeList[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nThong tin nhan vien thu %d:",i+1);
		xuatInfoNV(employeeList[i]);
		printf("\n");
	}
}

int findEmployee(Employee employeeList[], int n, char keyID[])
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(strcmp(employeeList[i].id, keyID) == 0)
		{
			return i;
		}
	}
	return 0;
}

void countMaleAndFemale(Employee employeeList[], int n, int *countMale, int *countFemale)
{
	*countMale = 0;
	*countFemale = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(employeeList[i].sex == 'M' || employeeList[i].sex == 'm')
			*countMale = *countMale + 1;
		else if(employeeList[i].sex == 'F' || employeeList[i].sex == 'f')
			*countFemale = *countFemale + 1;
		else 
			continue;
	}
}

void swap(Employee *person1, Employee *person2)
{
	Employee temp = *person1;
	*person1 = *person2;
	*person2 = temp;
}

void sortBirthYear(Employee employeeList[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(atoi(employeeList[i].birthYear) > atoi(employeeList[j].birthYear))
				swap(&employeeList[i],&employeeList[j]);
		}
	}
}

void sortSalary(Employee employeeList[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(employeeList[i].salary > employeeList[j].salary)
				swap(&employeeList[i],&employeeList[j]);
		}
	}
}

Employee employeeHasHighSalary(Employee employeeList[], int n)
{
	int highSalary = employeeList[0].salary;
	int vt = 0;
	
	int i;
	for(i = 0; i < n; i++)
	{
		if(highSalary < employeeList[i].salary)
		{
			highSalary = employeeList[i].salary;
			vt = i;
		}
	}
	return employeeList[vt];
}

Employee youngestEmployee(Employee employeeList[], int n)
{
	int youngest = 2022 - atoi(employeeList[0].birthYear);
	int vt = 0;
	
	int i;
	for(i = 0; i < n; i++)
	{
		if(youngest > (2022 - atoi(employeeList[i].birthYear)))
		{
			youngest = (2022 - atoi(employeeList[i].birthYear));
			vt = i;
		}
	}
	return employeeList[vt];
}

void deleteEmployeeFromList(Employee employeeList[], int *n)
{
	int vt;
	printf("\nNhap vi tri nhan vien trong danh sach can xoa khoi: ");
	scanf("%d",&vt);
	
	int i;
	for(i = vt; i < *n; i++)
	{
		printf("%d\n",i);
		employeeList[i] = employeeList[i+1];
	}
	*n = *n - 1;
}

void main()
{
	Employee employeeList[100];
	Employee employee;
	int n;
	
	nhapSoLuongNV(&n);
	nhapInfoCacNV(employeeList,n);
	xuatInfoCacNV(employeeList,n);
	
	char temp;
	temp = getchar(); // get the newline char 
	
	char keyID[10];
	printf("\nNhap ID nhan vien can tim: ");
	fgets(keyID, sizeof(keyID), stdin);
	removeNewlineChar(keyID);
	
	if(findEmployee(employeeList,n,keyID) != 0)
	{
		printf("\nThong tin nhan vien tim thay:");
		xuatInfoNV(employeeList[findEmployee(employeeList,n,keyID)]);
	}
	else
		printf("\nKhong tim thay nhan vien trong ds");
		
	int countMale;
	int countFemale;
	countMaleAndFemale(employeeList,n,&countMale,&countFemale);
	printf("\n");
	printf("\nSo luong nhan vien nam: %d",countMale);
	printf("\nSo luong nhan vien nu: %d",countFemale);
	
	printf("\n");
	printf("\nDanh sach nhan vien sap xep tang dan theo nam sinh");
	sortBirthYear(employeeList,n);
	xuatInfoCacNV(employeeList,n);
	
	printf("\n");
	printf("\nDanh sach nhan vien sap xep tang dan theo luong");
	sortSalary(employeeList,n);
	xuatInfoCacNV(employeeList,n);
	
	
	printf("\n");
	printf("\nThong tin nhan vien co luong cao nhat:");
	employee = employeeHasHighSalary(employeeList,n);
	xuatInfoNV(employee);
	
	printf("\n");
	printf("\nThong tin nhan vien tre nhat:");
	employee = youngestEmployee(employeeList,n);
	xuatInfoNV(employee);
	
	printf("\n");
	deleteEmployeeFromList(employeeList,&n);
	xuatInfoCacNV(employeeList,n);
}
