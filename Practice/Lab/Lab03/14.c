#include <stdio.h>
#include <stdbool.h>

bool is_Perfect_num(int n)
{
	int i;
	int sum = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
			sum += i;
	}
	if(sum == n)
		return true;
	return false;
}

void main()
{
	int so;
	printf("Nhap so: ");
	scanf("%d",&so);
	if(is_Perfect_num(so))
		printf("%d la so hoan thien",so);
	else 
		printf("%d khong la so hoan thien",so);
}