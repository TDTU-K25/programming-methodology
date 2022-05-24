#include <stdio.h>

int main()
{
	int number;
	
	printf("Nhap so: ");
	scanf("%d",&number);
	
	int i, sum = 0;
	for(i = 1; i < number; i++)
	{
		if(number % i == 0)
			sum = sum + i;
	}
	if(sum == number)
		printf("%d la so hoan thien",number);
	else
		printf("%d khong la so hoan thien",number);
}