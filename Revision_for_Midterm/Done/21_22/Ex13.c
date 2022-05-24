#include <stdio.h>

void main()
{
	int soGioGuiXe;
	printf("Nhap tong so gio gui xe oto tai trung tam: ");
	scanf("%d",&soGioGuiXe);
	
	int ngay = soGioGuiXe / 24;
	soGioGuiXe %= 24;
	
	int soTien = ngay * 200000 + giaTienGuiXeTrongNgay(soGioGuiXe);
	
	printf("Tien gui = %d",soTien);
}

int giaTienGuiXeTrongNgay(int soGioGuiXe)
{
	int giaTien = 0;
	if(soGioGuiXe > 0 && soGioGuiXe <= 2)
		giaTien = 20000;
	else if(soGioGuiXe >= 3 && soGioGuiXe <= 10)
		giaTien = 20000 + 15000 * (soGioGuiXe - 2);
	else if(soGioGuiXe >= 11 && soGioGuiXe <= 23)
		giaTien  = 20000 + 8*15000 + 10000 * (soGioGuiXe - 10);
	return giaTien;
}
