#include <stdio.h>

void main()
{
	int choice;
	printf("\n----------MENU----------");
	printf("\n1. Pepsi: 6000d");
	printf("\n2. Green Tea: 7000d");
	printf("\n3. Sting: 8000d");
	printf("\n4. Fresh milk: 6000d");
	printf("\n5. Water: 4000d");
	printf("\nVui long chon: ");
	scanf("%d",&choice);
	
	int money;
	printf("Vui long bo tien vao: ");
	scanf("%d",&money);
	
	switch(choice)
	{
		case 1:
			if(money == 6000)
				printf("\nPepsi cua ban day");
			else
			{
				if(money > 6000)
				printf("Du tien. Vui long nhap dung so tien");
				else
				printf("Thieu tien. Vui long nhap dung so tien");
			}
			break;
		case 2:
			if(money == 7000)
				printf("\nTra xanh cua ban day");
			else
			{
				if(money > 7000)
				printf("Du tien. Vui long nhap dung so tien");
				else
				printf("Thieu tien. Vui long nhap dung so tien");
			}
			break;
		case 3:
			if(money == 8000)
				printf("\nSting cua ban day");
			else
			{
				if(money > 8000)
				printf("Du tien. Vui long nhap dung so tien");
				else
				printf("Thieu tien. Vui long nhap dung so tien");
			}
			break;
		case 4:
			if(money == 6000)
				printf("\nSua tuoi cua ban day");
			else
			{
				if(money > 6000)
				printf("Du tien. Vui long nhap dung so tien");
				else
				printf("Thieu tien. Vui long nhap dung so tien");
			}
			break;
		case 5:
			if(money == 4000)
				printf("\nNuoc suoi cua ban day");
			else
			{
				if(money > 4000)
				printf("Du tien. Vui long nhap dung so tien");
				else 	
				printf("Thieu tien. Vui long nhap dung so tien");
			}
			break;
	}
}
