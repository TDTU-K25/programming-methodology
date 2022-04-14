#include <stdio.h>

int main()
{
	float diemToan, diemLy, diemHoa, diemSinh, diemTin, dtb;
	
	printf("Nhap diem Toan: ");
	scanf("%f",&diemToan);
	printf("Nhap diem Ly: ");
	scanf("%f",&diemLy);
	printf("Nhap diem Hoa: ");
	scanf("%f",&diemHoa);
	printf("Nhap diem Sinh: ");
	scanf("%f",&diemSinh);
	printf("Nhap diem Tin: ");
	scanf("%f",&diemTin);
	
	dtb = ((diemToan + diemLy + diemHoa + diemSinh + diemTin) / 5) * 10;
	
	if(dtb > 90)
		printf("Grade A");
	else if(dtb > 80)
		printf("Grade B");	
	else if(dtb > 70)
		printf("Grade C");
	else if(dtb > 60)
		printf("Grade D");
	else if(dtb > 40)
		printf("Grade E");
	else 
		printf("Grade F");
	
}