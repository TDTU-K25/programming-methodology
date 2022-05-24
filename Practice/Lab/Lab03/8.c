#include <stdio.h>

int demcacchuso(int number)
{
	int count = 0;
	while(number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	printf("So cac chu so cua %d la %d",so,demcacchuso(so));
}
