#include<stdio.h>
#define MAX 100

void nhapn(int *m,int *n)
{
	do
	{
		printf("Nhap dong:");
		scanf("%d",&*m);
		printf("Nhap cot:");
		scanf("%d",&*n);
		if(*n<=0 || *n>MAX || *m<=0 || *m>MAX)
			printf("Sai, nhap lai.\n");
	}
	while(*n<=0 || *n>MAX || *m<=0 || *m>MAX);
}
void input(int a[][MAX], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Nhap phan tu thu a[%d,%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void output(int a[][MAX],int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);			
		}
		printf("\n");
	}
}
int tongchan(int a[][MAX],int m, int n)
{
	int i,j,s=0;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]%2==0)
				s =s +a[i][j];		
		}		
	}
	return s;
}
void lietchan(int a[][MAX],int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]%2==0)
				printf("%d\t",a[i][j]);		
			else
				printf("-\t",a[i][j]);		
		}	
		printf("\n");	
	}	
}
int tong1dong(int a[][MAX], int n, int vtdong)
{
	int j,s=0;
	for(j=0; j<n; j++)
	{
		s =s +a[vtdong][j];
	}
	return s;
}
void tongtungdong(int a[][MAX], int m, int n)
{
	int i,j;
	for(i=0; i<m; i++)
	{				
		printf("tong dong thu %d=%d\n",i,tong1dong(a,n,i));
	}
}
int tong1cot(int a[][MAX], int m, int vtcot)
{
	int i,s=0;
	for(i=0; i<m; i++)
	{
		s =s +a[i][vtcot];
	}
	return s;
}
int main()
{
	int n,m;
	int a[MAX][MAX];
	nhapn(&m,&n);
	input(a,m,n);
	printf("\nMang 2 chieu:\n");
	output(a,m,n);
	//printf("\nTong chan:%d",tongchan(a,m,n));
	//printf("\nCac phan tu chan:\n");lietchan(a,m,n);
	printf("\nTong tung dong:\n");tongtungdong(a,m,n);
	return 0;
}
