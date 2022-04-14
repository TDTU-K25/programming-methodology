#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{
	char id[10];
	char name[30];
	char sex[10];
	char birthYear[5];
	char phoneNumber[15];
	char salary[20];
} EmployeeInfo;

void xoaKiTuXuongDong(char s[])
{
	int len = strlen(s);
	if(s[len-1] == '\n')
		s[len-1] = '\0';
}

void nhapMotInfo(EmployeeInfo *employee)
{
	printf("\nID: "); scanf("%s",employee->id);
	fflush(stdin);
	printf("Name: "); fgets(employee->name, 30, stdin);
	xoaKiTuXuongDong(employee->name);
	printf("Sex: "); scanf("%s",employee->sex);
	printf("Birth year: "); scanf("%s",employee->birthYear);
	printf("Phone number: "); scanf("%s",employee->phoneNumber);
	printf("Salary: "); scanf("%s",employee->salary);
}

void xuatMotInfo(EmployeeInfo employee)
{
	printf("\nID = %s",employee.id);
	printf("\nName = %s",employee.name);
	printf("\nSex = %s",employee.sex);
	printf("\nBirth year = %s",employee.birthYear);
	printf("\nPhone number = %s",employee.phoneNumber);
	printf("\nSalary = %s",employee.salary);
}

void nhapNhieuInfo(EmployeeInfo list[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Please fill in these requirement");
		nhapMotInfo(&list[i]);
		printf("\n");
	}
}

void xuatNhieuInfo(EmployeeInfo list[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nInfo of employee %d",i+1);
		xuatMotInfo(list[i]);
		printf("\n");
	}
}

void numberOfEmployees(int *n)
{
	do
	{
		printf("Enter the number of employees in your company: ");
		scanf("%d",&*n);
		if(*n <= 0)
		printf("Wrong, try again");
	} while(*n <= 0);
}

int findEmployee(EmployeeInfo list[], char key[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(stricmp(list[i].id,key) == 0)
		{
			xuatMotInfo(list[i]);
			return 1;
		}
	}
	return 0;
}

void countMaleAndFemale(EmployeeInfo list[], int n, int *countM, int *countF)
{
	int i;
	*countM = 0;
	*countF = 0;
	for(i = 0; i < n; i++)
	{
		if(stricmp(list[i].sex,"male") == 0)
			*countM = *countM + 1;
		else if(stricmp(list[i].sex,"female") == 0)
			*countF = *countF + 1;
		else
			continue;
	}
}

void swap(EmployeeInfo *person1, EmployeeInfo *person2)
{
	EmployeeInfo temp = *person1;
	*person1 = *person2;
	*person2 = temp;
}

void sortBirthYear(EmployeeInfo list[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(atoi(list[i].birthYear) > atoi(list[j].birthYear))
				swap(&list[i],&list[j]);
		}
	}
}

void sortSalary(EmployeeInfo list[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(atoi(list[i].salary) > atoi(list[j].salary))
				swap(&list[i],&list[j]);
		}
	}
}

EmployeeInfo maxSalary(EmployeeInfo list[], int n)
{
	int max = atoi(list[0].salary);
	int vt = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(max < atoi(list[i].salary))
		{
			max = atoi(list[i].salary);
			vt = i;
		}
	}
	return list[vt];
}

EmployeeInfo findYoungestEmployee(EmployeeInfo list[], int n)
{
	int minDistance = 2022 - atoi(list[0].birthYear);
	int vt = 0;
	int i;
	for(i = 0; i < n; i++)
	{
		if(minDistance > (2022 - atoi(list[i].birthYear)))
		{
			minDistance = (2022 - atoi(list[i].birthYear));
			vt = i;
		}
	}
	return list[vt];
}

void deleteEmployeeFromList(EmployeeInfo list[], int *n)
{
	int vt;
	printf("\nNhap vi tri nhan vien trong danh sach can xoa khoi: ");
	scanf("%d",&vt);
	int i;
	for(i = vt; i < *n; i++)
	{
		list[i] = list[i+1];
	}
	*n = *n - 1;
}

void main()
{
	EmployeeInfo list[MAX];
		
	int n;
	numberOfEmployees(&n);
	
	nhapNhieuInfo(list,n);
	xuatNhieuInfo(list,n);
	
	char key[10];
	printf("\nEnter the ID of employee you want to find: ");
	scanf("%s",&key);
	
	printf("\nThe info of the person you are looking for:");
	if(findEmployee(list,key,n) == 1)
	{
		
	}
	else
	{
		printf("\nThe ID you have entered is incorrect");
	}
	
	int countM, countF;
	countMaleAndFemale(list,n,&countM,&countF);
	printf("\n");
	printf("\nSo luong nhan vien nam: %d",countM);
	printf("\nSo luong nhan vien nu: %d",countF);
	
	printf("\n");
	printf("\nSap xep tang dan theo nam sinh");
	sortBirthYear(list,n);
	xuatNhieuInfo(list,n);
	
	printf("\n");
	printf("\nSap xep tang dan theo luong");
	sortSalary(list,n);
	xuatNhieuInfo(list,n);
	
	
	printf("\n");
	printf("\nThong tin nhan vien co luong cao nhat:");
	EmployeeInfo employeeHasMaxSalary;
	employeeHasMaxSalary = maxSalary(list,n);
	xuatMotInfo(employeeHasMaxSalary);
	
	printf("\n");
	printf("\nNhan vien tre nhat");
	EmployeeInfo youngestEmployee;
	youngestEmployee = findYoungestEmployee(list,n);
	xuatMotInfo(youngestEmployee);
	
	printf("\n");
	deleteEmployeeFromList(list,&n);
	xuatNhieuInfo(list,n);
}
