#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int originalNum = number;
	
	int count = 0;
	while(number > 0)
	{
		number = number / 10;
		count++;
	}
	
	printf("%d co %d chu so",originalNum,count);
}