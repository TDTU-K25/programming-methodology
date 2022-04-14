#include <stdio.h>

int main()
{
	int n;
	do
	{
		printf("Nhap vao n: ");
		scanf("%d",&n);
		if(n < 0)
			printf("Nhap sai. Vui long nhap lai!\n");
	} while(n < 0);
		
	// for
	int s1 = 0;
	int i1 = 1;
	for( ; i1 <= n; i1 += 2)
	{
		s1 = s1 + i1;
	}


	// while
	int s2 = 0;
	int i2 = 1;
	while(i2 <= n)
	{
		s2 = s2 + i2;
		i2 += 2;
	}

	
	// do while
	int s3 = 0;
	int i3 = 1;
	do
	{
		s3 = s3 + i3;
		i3 += 2;
	} while(i3 <= n);
	
	printf("Ket qua la: %d",s1);
	printf("\nKet qua la: %d",s2);
	printf("\nKet qua la: %d",s3);
	
}