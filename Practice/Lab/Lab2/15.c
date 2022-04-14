#include <stdio.h>

int main()
{
	int number;
	
	do
	{
		printf("Nhap so: ");
		scanf("%d",&number);
		if(number < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(number < 0);
	
	// for
	int i1;
	for(i1 = 1; i1 <= number; i1++)
	{
		int k1;
		int count1 = 0;
		for(k1 = 1; k1 <= i1; k1++)
		{
			if(i1 % k1 == 0)
				count1++;
		}
		if(count1 == 2)
			printf("%d\t",i1);
	}
	
	printf("\n");

	// while
	int i2 = 1;
	while(i2 <= number)
	{
		int k2 = 1;
		int count2 = 0;
		while(k2 <= i2)
		{
			if(i2 % k2 == 0)
				count2++;
			k2++;
		}
		if(count2 == 2)
			printf("%d\t",i2);
		i2++;
	}

	printf("\n");

	// do while
	int i3 = 1;
	do 
	{
		int k3 = 1;
		int count3 = 0;
		do
		{
			if(i3 % k3 == 0)
				count3++;
			k3++;
		} while(k3 <= i3);
		if(count3 == 2)
			printf("%d\t",i3);
		i3++;
	} while(i3 <= number);
}