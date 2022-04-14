#include <stdio.h>

void bangcuuchuong(int number)
{
	int i;
	for(i = 1; i <= 10; i++)
	{
		int product = number * i;
		printf("%d * %d = %d\n",number,i,product);
	}
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("Bang cuu chuong cua %d\n",so);
	bangcuuchuong(so);
}

