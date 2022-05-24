#include <stdio.h>

void main()
{
	printf("\n----------MENU----------");
	printf("\n1. Tra xanh C2: 9000d/chai");
	printf("\n2. Sting: 11000d/chai");
	printf("\n3. Pepsi: 10000d/chai");
	printf("\n4. Warrior: 13000d/chai");
	printf("\n5. Nuoc suoi: 5000d/chai");
	
	int money;
	printf("\nNhap tien: ");
	scanf("%d",&money);
	
	int choice;
	printf("Nhap lua chon: ");
	scanf("%d",&choice);
	
	int soluong;
	int tienthua;
	
	switch(choice)
	{
		case 1:
			if(money < 9000)
			{
				printf("Vui long nhap du so tien");
			}
			else
			{
				soluong = money / 9000;
				tienthua = money % 9000;
				printf("Tra xanh C2 - %d chai - Tien du: %d",soluong,tienthua);
			}
			break;
		case 2:
			if(money < 11000)
			{
				printf("Vui long nhap du so tien");
				return ;
			}
			else
			{
			soluong = money / 11000;
			tienthua = money % 11000;
			printf("Sting - %d chai - Tien du: %d",soluong,tienthua);
			}
			break;
		case 3:
			if(money < 10000)
			{
				printf("Vui long nhap du so tien");
				return ;
			}
			else
			{
			soluong = money / 10000;
			tienthua = money % 10000;
			printf("Pepsi - %d chai - Tien du: %d",soluong,tienthua);
			}
			break;
		case 4:
			if(money < 13000)
			{
				printf("Vui long nhap du so tien");
				return ;
			}
			else
			{
			soluong = money / 13000;
			tienthua = money % 13000;
			printf("Warrior - %d chai - Tien du: %d",soluong,tienthua);
			}
			break;
		case 5:
			if(money < 5000)
			{
				printf("Vui long nhap du so tien");
				return ;
			}
			else
			{
			soluong = money / 5000;
			tienthua = money % 5000;
			printf("Nuoc suoi - %d chai - Tien du: %d",soluong,tienthua);	
			}
			break;
	}
}
