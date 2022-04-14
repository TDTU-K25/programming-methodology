#include <stdio.h>

int main()
{
	int n;
	
	do
	{
		printf("Nhap vao n: ");
		scanf("%d",&n);
		if (n < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(n < 0);
	
	// for
	int sum1 = 0;
	int i1 = 1;
	for( ; i1 <= n; i1++)
	{
		sum1 = sum1 + i1;
	}


	// while
	int sum2 = 0;
	int i2 = 1;
	while(i2 <= n)
	{
		sum2 = sum2 + i2;
		i2++;
	}

	
	// do while 
	int sum3 = 0;
	int i3 = 1;
	do 
	{
		sum3 = sum3 + i3;
		i3++;
	} while(i3 <= n);
	
	printf("Ket qua la: %d",sum1);
	printf("\nKet qua la: %d",sum2);
	printf("\nKet qua la: %d",sum3);
	
}