#include <stdio.h>
#include <math.h>

void main()
{
	float xO, yO, xA, yA, R;
	printf ("Nhap toa do tam 0: ");
	scanf("%f %f",&xO,&yO);
	printf ("Nhap toa do tam A: ");
	scanf("%f %f",&xA,&yA);
	printf("Nhap ban kinh: ");
	scanf("%f",&R);
	
	float deltaX = xA - xO;
	float deltaY = yA - yO;
	float d = sqrt(pow(deltaX,2) + pow(deltaY,2));

	if(d == R)
	{
		printf("Diem A nam tren duong tron");
	}
	else
	{
		if (d > R)
		{
			printf("Diem A nam ngoai duong tron");
		}
		else 
		{
			printf("Diem A nam trong duong tron");
		}
	}
}
