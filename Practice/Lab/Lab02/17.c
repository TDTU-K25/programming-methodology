#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(n < 0);
	
	// for
	int i1;
	for(i1 = 1; i1 <= n; i1++)
	{
		int sum1 = 0;
		int j1;
		for(j1 = 1; j1 < i1; j1++)
		{
			if(i1 % j1== 0)
			sum1 = sum1 + j1;
		}
		if(sum1 == i1)
			printf("%d ",i1);
	}
	
	printf("\n");
	
	// while
	int i2 = 1;
	while(i2 <= n)
	{
		int sum2 = 0;
		int j2 = 1;
		while(j2 < i2)
		{
			if(i2 % j2 == 0)
			{
				sum2 = sum2 + j2;
			}
			j2++;
		}
		if(sum2 == i2)
			printf("%d ",i2);
		i2++;
	}
	
	printf("\n");
	
	
	int i3 = 1;
	do
	{
		if(i3 == 1)
		{
			i3 += 1;
			continue;
		}
		
		int sum3 = 0;
		int j3 = 1;
		do
		{
			if(i3 % j3 == 0)
				sum3 = sum3 + j3;
			j3++;
		} while (j3 < i3);
		if(sum3 == i3)
		{
			printf("%d ",i3);
		}
		i3++;
	} while(i3 <= n);
}