#include<stdio.h>
#define MAX 100

void nhapn(int *n)
{
	do
	{
		printf("Nhap n:");
		scanf("%d",&*n);
		if(*n<=0 || *n>MAX)
			printf("Sai, nhap lai.\n");
	}
	while(*n<=0 || *n>MAX);
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Nhap phan tu thu a[%d]:",i);
		scanf("%d",&a[i]);
	}
}

void output(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%4d",a[i]);		
	}
}
int tonguscuaptchan(int a[], int n)
{
	int i,j,s=0;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			for(j=1;j<=a[i]; j++)	
				if(a[i]%j==0)
					s =s+j;
		}
	}
	return s;
}
void sort(int a[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{			
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void sortx(int a[], int n, int x)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j] && a[i]<x && a[j]<x)
			{			
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void copymang(int a[], int b[], int n)
{
	int i;
	for(i=0; i<n-1; i++)
	{
		b[i]=a[i];
	}
}
void themvt(int a[], int *n, int x, int vt)
{
	int i;
	for(i=*n; i>vt; i--) // luu y
	{
		a[i]=a[i-1];
	}
	a[vt] = x;
	*n=*n+1;
}
void themsauchan(int a[], int *n, int x)
{
	int i;
	for(i=*n-1; i>=0; i--) // luu y
	{
		if(a[i]%2==0)
		{
			themvt(a,&*n,x,i+1);
		}
	}
}
void xoavt(int a[], int *n, int vt)
{
	int i;
	for(i=vt; i<*n; i++)
	{
		a[i]=a[i+1];
	}
	*n =*n-1;
}

void xoachan(int a[], int *n)
{
	int i;
	for(i=*n-1; i>=0; i--) // luu y
	{
		if(a[i]%2==0)
			xoavt(a,&*n,i);
	}
}
int main()
{
	int n;
	int a[MAX];
	nhapn(&n);
	input(a,n);
	printf("\nMang:");
	output(a,n);
	/*printf("\nTong us cua phan tu chan : %d",tonguscuaptchan(a,n));
	sort(a,n);
	printf("\nMang da sort:");
	output(a,n);
	int b[MAX];
	copymang(a,b,n);
	printf("\nMang b:");
	output(b,n);
	*/
	int x;
	printf("\nnhap x:");
	scanf("%d",&x);
	//themvt(a,&n,x,n);
	//themvt(a,&n,x,0);
	//themsauchan(a,&n,x);
	xoachan(a,&n);
	printf("\nMang sau:");
	output(a,n);
	
	return 0;
}
