#include <stdio.h>

void main()
{
	int d;
	printf("Nhap so km ma khach hang di: ");
	scanf("%d",&d);
	
	int cost;
	
	if(d <= 1)
	{
		cost = 18000 * d;
	}
	else 
	{
		if(d <= 10)
		{
			cost = 1  * 18000 + (d - 1) * 8000;
		}
		else 
		{
			if(d <= 30)
			{
				cost = 1 * 18000 + 9 * 8000 + (d - 10) * 6000;
			}
			else
			{
				cost = 1 * 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000;
			}
		}
	}
	
	printf("So tien ma khach phai tra la %d",cost);
}
