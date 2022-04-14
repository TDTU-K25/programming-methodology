#include <stdio.h>

void main()
{
	float qt1, qt2, gk, ck;
	
	printf("Phuong phap lap trinh\n");
	
	printf("Nhap diem qua trinh 1: ");
	scanf("%f",&qt1);
		
	printf("Nhap diem qua trinh 2: ");
	scanf("%f",&qt2);
	
		
	printf("Nhap diem giua ki: ");
	scanf("%f",&gk);
	
	printf("Nhap diem cuoi ki: ");
	scanf("%f",&ck);
	
	if(qt1 < 0 || qt1 > 10 || qt2 < 0 || qt2 > 10 || gk < 0 || gk > 10 || ck < 0 || ck > 10)
	{
		printf("Nhap sai");
	}
	else
	{
		float dtb = qt1 * 0.1 + qt2 * 0.2 + gk * 0.2 + ck * 0.5;
		if(dtb < 5.0)
		{
			printf("Diem trung binh cua mon hoc la %.2f",dtb);
			printf("\nHoc lai");
		}
		else
		{
			if(dtb < 6.5)
			{
				printf("Diem trung binh cua mon hoc la %.2f",dtb);
				printf("\nTrung binh");
			}
			else 
			{
				if(dtb < 8.0)
				{
					printf("Diem trung binh cua mon hoc la %.2f",dtb);
					printf("\nKha");
				}
				else
				{
					if(dtb < 9.0)
					{
						printf("Diem trung binh cua mon hoc la %.2f",dtb);
						printf("\nGioi");
					}
					else
					{
						printf("Diem trung binh cua mon hoc la %.2f",dtb);
						printf("\nXuat sac");
					}
				}
			}
		}
	}		
}
