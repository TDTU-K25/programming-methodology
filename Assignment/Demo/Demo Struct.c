#include<stdio.h>
#define MAX 500
typedef struct
{
	char id[10];
	char name[20];
	char gender[7];
	int age;
	//char birthday[10];
	char dep[10];
	char country[20];
} EMP;

EMP input()
{
	EMP temp;
	printf("id:"); scanf("%s",&temp.id);
	printf("name:"); scanf("%s",&temp.name);
	printf("gender:"); scanf("%s",&temp.gender);
	printf("age:"); scanf("%d",&temp.age);
	printf("dep:"); scanf("%s",&temp.dep);
	printf("country:"); scanf("%s",&temp.country);
	return temp;
}
void output(EMP temp)
{
	printf("id:%s\n",temp.id);
	printf("name:%s\n",temp.name);
	printf("gender:%s\n",temp.gender);
	printf("age:%d\n",temp.age);
	printf("dep:%s\n",temp.dep);
	printf("country:%s\n",temp.country);
}
void inputs(EMP a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n===Nhap thong tin EMP thu %d==\n",i+1);
		a[i] = input();		
	}
}
void outputs(EMP a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n===Thong tin EMP thu %d==\n",i+1);
		output(a[i]);	
	}
}
void listgender(EMP a[], int n, char value[10])
{
	int i;
	for(i=0; i<n; i++)
	{
		if(stricmp(a[i].gender,value)==0)
		{
			output(a[i]);
		}		
	}
}
int main()
{
	EMP a[MAX];
	int n;
	printf("\n input number:"); scanf("%d",&n);
	inputs(a,n);
	printf("\n==Danh sach==\n");
	outputs(a,n);
	
	char key[10], value[10];
	scanf("%s %s",&key,&value);
	if(stricmp(key,"list")==0)
		listgender(a,n,value);
	
	
	return 0;
}
