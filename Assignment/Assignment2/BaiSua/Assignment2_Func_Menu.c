#include<stdio.h>
#include<stdbool.h>
int nhap()
{
	int n;
	do
	{
		printf("nhap n chan, >0:");
		scanf("%d",&n);
		if(n%2!=0 || n<=0)
			printf("nhap sai, hay nhap lai\n");
	}while(n%2!=0 || n<=0);
	return n;
}
int tongnsole(int n)
{
	int i, d=0, s=0;
	//i=1;
	/*while(d<n)
	{
		if(i%2!=0)
		{
			s =s+i;
			d++;
		}
		i++;
	}
	*/
	
	for(i=1 ;d<n ;i++)
		if(i%2!=0){
			s=s+i;
			d++;
		}
		//if(d==n)
			//break;
			
	/*for(i=1 ;i<n*2 ;i++)
		if(i%2!=0){
			s=s+i;			
		}
		*/
	return s;
}
bool laSHT(int k)
{
	int s=0;
	int i;
	for(i=1; i<k;i++) //ko dc chay den =k
	{
		if(k%i==0)
			s =s +i;
	}
	if(s==k)
		return true;
	return false;
}
bool tontaiSHT(int n)
{
	while(n) //!=0, >0
	{
		if(laSHT(n%10))
			return true;
		n=n/10;
	}
	return false;
}
void insoSHT(int n)
{
	int d=0;
	while(n) //!=0, >0
	{
		if(laSHT(n%10))
			printf("%d",n%10);
		n=n/10;
	}

}
int toanchan(int n)
{	
	while(n) //!=0, >0
	{
		if((n%10)%2!=0)
			return 1;
		n=n/10;
	}
	return 0;

}
int tangdan(int n)
{	int temp = n %10;
	n=n/10;
	while(n) //!=0
	{
		if(temp<n%10)
			return 0;
		temp=n%10;
		n=n/10;
	}
	return 1;

}
float tongS(int n)
{
	float s=0;
	int i;
	for(i=1; i<=n; i++)
	{
		s =s + 1.0/(i+1);
	}
	return s;
}
int main()
{
	
	int chon, n;
	do
	{	
		printf("\n====MENU======");
		printf("\n1. nhap n (chan,>0)");
		printf("\n6. cau 6");
		printf("\n7. cau 7");
		printf("\n8. cau 8");
		printf("\n9. cau 9");
		printf("\n10. cau 10");
		printf("\n0. thoat..");
		printf("\nVui chon long chon:");
		scanf("%d",&chon);		
		switch(chon)
		{
			case 0: printf("Good bye"); break;
			case 1: n = nhap(); break;
			case 6: printf("\ncau 6: tong %d so le = %d",n,tongnsole(n)); break;
			case 7: printf("\ncau 7:");
				if(tontaiSHT(n))
					printf("%d co ton tai SHT",n);	
				else
					printf("%d ko co ton tai SHT",n);
				break;
			case 10: printf("\nCau 10: Tong S =%.2f", tongS(n));break;
			default: printf("sai..hay chon lai.");
		}
	
	}while(chon!=0);
	
	
	//printf("\n..Cac...");
	//insoSHT(n);
	printf("\ncau 8:");
	if(toanchan(n)==0)
		printf("%d toan chan",n);
	else
		printf("%d ko toan chan",n);
	printf("\ncau 9:");
	if(tangdan(n)==0)
		printf("%d ko tang dan",n);
	else
		printf("%d tang dan",n);

	return 0;
}
