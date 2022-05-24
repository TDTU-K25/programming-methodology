#include<stdio.h>
#include<time.h>
#define MAX 100

void nhapn(int *n)
{
	do
	{
		printf("Nhap dong/cot:");	
		scanf("%d",&*n);
		if(*n<=0 || *n>MAX)
			printf("Sai, nhap lai.\n");
	}
	while(*n<=0 || *n>MAX);
}
void input(int a[][MAX], int n)
{
	int min=1, max=9;
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j]=(rand()%(max-min+1)) +min;
		}
	}
}

void output(int a[][MAX],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",a[i][j]);			
		}
		printf("\n");
	}
}
void incheochinh(int a[][MAX], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{			
		printf("%d\t",a[i][i]);		
	}
}
void incheochinh(int a[][MAX], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{			
		printf("%d\t",a[i][n-1-i]);		
	}
}
int main()
{
	srand(time(NULL));
	int n;
	int a[MAX][MAX];
	nhapn(&n);
	input(a,n);
	printf("\nMa tran A:\n");
	output(a,n);
	incheochinh(a,n);
	return 0;
}
