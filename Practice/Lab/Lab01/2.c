#include <stdio.h>

int main()
{
	int so1,so2,tong,hieu,tich,chiadu;
	float thuong;
	printf("Nhap vao so thu nhat: ");
	scanf("%d",&so1);
	printf("Nhap vao so thu hai: ");
	scanf("%d",&so2);
	tong = so1 + so2;
	hieu = so1 - so2;
	tich = so1 * so2;
	thuong = (float)so1 / so2;
	chiadu = so1 % so2;
	printf("Ket qua %d cong %d la: %d \n",so1,so2,tong);
	printf("Ket qua %d tru %d la: %d \n",so1,so2,hieu);
	printf("Ket qua %d nhan %d la: %d \n",so1,so2,tich);
	printf("Ket qua %d chia %d la: %f \n",so1,so2,thuong);
	printf("Ket qua %d chia du %d la: %d \n",so1,so2,chiadu);
}