#include <stdio.h>
#include <stdbool.h>

void NhapSo(int *num)
{
    do
    {
        printf("Nhap so: ");
        scanf("%d",&*num);
        if(*num < 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*num < 0);
}

bool LaSNT(int i, int num)
{
	if(num == 0 || num == 1)
		return false;
		
    if(i == num) // (đk dừng) i == num nghia là i dã di qua 2 -> num-1 => num không chia hết cho số nào trong đoạn [2, num-1] => là SNT 
        return true;
    else
	{
		if(num % i == 0) // num chia hết cho 1 số khác ngoài 1 và chính num -> không là SNT
        	return false;
		else
			return LaSNT(i+1,num);
	}
}

void main()
{
    int num;
    NhapSo(&num);
    if(LaSNT(2, num))
    	printf("%d la so nguyen to",num);
    else
    	printf("%d khong la so nguyen to",num);
}

