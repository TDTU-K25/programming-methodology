#include <stdio.h>
#include <math.h>

void main()
{
	float a, b, c;
	printf("Nhap do dai 3 canh cua 1 tam giac: ");
	scanf("%f %f %f",&a,&b,&c);
	
	float chuvi, p, dientich;
	if(a > b + c || b > a + c || c > a + b)
	{
		printf("Khong thoa man dieu kien hinh thanh tam giac");
	}
	else
	{
		chuvi = a + b + c;
		p = chuvi / 2;
		dientich = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nChu vi tam giac la %f",chuvi);
		printf("\nDien tich tam giac la %f",dientich);
		if (a == b && b == c && a == c)
			printf("\nDay la tam giac deu");
		else if(a == b || b == c || c == a)
			printf("\nDay la tam giac can");
		else 
			printf("\nDay la tam giac thuong");
	}
}
