#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int inputn()
{
	int n;
	do
	{
		printf("nhap 1 so (>0, <%d):",MAX);
		scanf("%d",&n);
		if(n<=0 || n>MAX)
			printf("sai..nhap lai.\n");
	}
	while(n<=0 || n>MAX);
	return n;
}
void input(int a[], int n)
{
	int i;
	for(i=0; i<n;i++)
	{
		printf("nhap phan thu a[%d]:",i);
		scanf("%d",&a[i]);
	}
}
void output(int a[], int n)
{
	int i;
	for(i=0; i<n;i++)
	{
		printf("%d\t",a[i]);
	
	}
}
int timmax(int a[], int n)
{
	int m=a[0];
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}
int timchandau(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
			return a[i];	
	}
	return 1;
}
int timmaxchan(int a[], int n)
{
	int m=timchandau(a,n);
	if(m==1)
		return 1;
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
			if(a[i]>m)
				m=a[i];
	}
	return m;
}
bool laSNT(int k)
{
	if(k<2)
		return false;
	int i;
	for(i=2; i<k; i++)
	{
		if(k%i==0)
			return false;
	}
	return true;
}
int demSNT(int a[], int n)
{
	int d=0;
	int i;
	for(i=0; i<n; i++)
	{
		if(laSNT(a[i]))
			d++;
	}
	return d;
}
void lkSNT(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(laSNT(a[i]))
			printf("%d\t",a[i]);
	}	
}
int chancuoi(int a[], int n)
{
	int i;
	for(i=n-1; i>=0;i--)
	{
		if(a[i]%2==0)
			return a[i];
	}
	return -1;	
}
bool doixung(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]!=a[n-1-i])
			return false;
	}
	return true;
}
void lksocucdai(int a[], int n)
{
	int i;
	if(a[0]>a[1])
		printf("%d\t", a[0]);
	for(i=1; i<n-1; i++) // lu y
	{
		if(a[i]>a[i-1] && a[i]>a[i+1])
			printf("%d\t", a[i]);	
	}
	if(a[n-1]>a[n-2])
		printf("%d\t", a[n-1]);
	
}
int tongus(int a[], int n, int x)
{
	int s=0;
	int i;
	for(i=0; i<n; i++)
	{
		if(x%a[i]==0)
			s +=a[i];
	}
	return s;
}
void hoanvi(int x, int y) //x=5, y=7
{
	int temp=x; //5
	x=y;//x=7
	y=temp;//y=5
}


void daomangchovui(int a[], int n)
{
	int i;
	for(i=0; i<n/2; i++)
	{		
		int temp=a[i]; //5
		a[i]=a[n-1-i];//x=7
		a[n-1-i]=temp;//y=5
	}
}

int main()
{
	int n;
	int a[MAX];
	n=inputn();
	input(a,n);
	printf("\nMang:"); 
	output(a,n);
	/*
	printf("\n1: So max trong mang la %d",timmax(a,n));
	printf("\n2: So max chan trong mang la %d",timmaxchan(a,n));
	printf("\n3: ");
	int chanmax=timmaxchan(a,n);
	if(chanmax==1)
		printf("Mang ko co so chan..");
	else
		printf("So chan max trong Mang la %d",chanmax);
	printf("\n4: Mang co %d SNT",demSNT(a,n));
	printf("\n5: Cac SNT trong mang:"); lkSNT(a,n);
	printf("\n6:");
	if(doixung(a,n))
		printf("Mang doi xung");
	else
		printf("Mang ko doi xung");
	printf("\nCac phan tu cuc dai:"); lksocucdai(a,n);
	int x;
	printf("\nNhap x:");
	scanf("%d",&x);
	printf("Tong cac us cua %d la %d",x, tongus(a,n,x));
	*/
	printf("\nMang sau khi dao:");
	daomangchovui(a,n);
	output(a,n);
	return 1;
}
