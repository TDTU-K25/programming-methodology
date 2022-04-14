#include <stdio.h>

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
	
	int product = 1;
	int i = 1;
	for( ;i <= n; )
	{
		product *= i;
		i++;
	}
	
	printf("%d! = %d",n,product);
	
}