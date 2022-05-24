#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	printf("Bang cuu chuong cua %d la:\n",number);
	
	int i;
	int product = 1;
	for(i = 1; i <= 10; i++)
	{
		product = number * i;
		printf("%d * %d = %d\n",number,i,product);
	}
	
	return 1;
	
}