#include <stdio.h>

int main()
{
	float length, width;
	printf("Nhap chieu dai cua hinh chu nhat: ");
	scanf("%f",&length);
	printf("Nhap chieu rong cua hinh chu nhat: ");
	scanf("%f",&width);
	printf("Chu vi hinh chu nhat la %.2f\n",(length + width) * 2);
	printf("Dien tich hinh chu nhat la %.2f\n",length * width);
	return 0;
}