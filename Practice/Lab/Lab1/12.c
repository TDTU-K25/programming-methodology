#include <stdio.h>

int main()
{
	int goc1, goc2, goc3, tong3goc;

	printf("Nhap vao gia tri cua goc thu nhat: ");
	scanf("%d",&goc1);
	printf("Nhap vao gia tri cua goc thu hai: ");
	scanf("%d",&goc2);
	printf("Nhap vao gia tri cua goc thu ba: ");
	scanf("%d",&goc3);
	
	tong3goc = goc1 + goc2 + goc3;
	
	if(tong3goc == 180)
		printf("Tam giac hop le");
	else 
		printf("Tam giac khong hop le");
}