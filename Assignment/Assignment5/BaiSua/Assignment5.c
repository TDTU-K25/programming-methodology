#include<stdio.h>
#include<time.h>
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
void input(int a[], int n, int min, int max)
{

	int i;
	for(i=0; i<n; i++)
	{
		//printf("Nhap phan tu thu a[%d]:",i);
		///scanf("%d",&a[i]);
		a[i]=(rand()%(max-min+1))+min;
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

void sort(int a[], int n)
{
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]<a[j])
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

void xoavt(int a[], int *n, int vt)
{
	int i;
	for(i=vt; i<*n; i++)
	{
		a[i]=a[i+1];
	}
	*n =*n-1;
}
void themx(int a[], int *n, int x)
{
	 //8 5 4 x 1 -2   ; x=3
	 int i;
	 //printf("n=%d",*n);
	 for(i=0; i<*n; i++)
	 {
	 	if(a[i]<x)
	 	{
	 		themvt(a,&*n,x,i);	 		
	 		break;
		}
	 }
	 
}
void xoalonhonx(int a[], int *n, int x)
{	 
	 int i;	 
	 for(i=*n-1; i>=0; i--)
	 {
	 	if(a[i]>x)
	 		xoavt(a,&*n,i);
	 }
}
void tachmang(int a[], int n)
{
	int c=0,l=0;
	int chan[MAX],le[MAX];
	int i;
	for(i=0;i<n; i++)
	{
		if(a[i]%2==0)
		{
			chan[c++]=a[i];
		}
		else
		{
			le[l++]=a[i];			
		}
	}
	printf("\nMang chan:");
	for(i=0;i<c; i++)	
	{
		printf("%3d",chan[i]);
	}
	printf("\nMang le:");
	for(i=0;i<l; i++)	
	{
		printf("%3d",le[i]);
	}
}
int main()
{
	srand(time(NULL));
	int n;
	int a[MAX];
	nhapn(&n);
	int min, max;
	printf("nhap min:");
	scanf("%d",&min);
	printf("nhap max:");
	scanf("%d",&max);
	input(a,n, min,max);
	printf("\nMang:");
	output(a,n);
	sort(a,n);
	printf("\nMang sort:");
	output(a,n);
	int x;
	printf("\nNhap x:");
	scanf("%d",&x);
	themx(a,&n,x);
	printf("\nMang them x:");
	output(a,n);
	xoalonhonx(a,&n,x);
	printf("\nMang xoa lon hon x:");
	output(a,n);
	tachmang(a,n);
	return 0;
}
