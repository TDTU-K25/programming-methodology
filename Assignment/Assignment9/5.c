#include <stdio.h>
#include <stdbool.h>

void NhapSo(int *num)
{
    do
    {
        printf("Nhap so: ");
        scanf("%d",&*num);
        if(*num <= 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*num <= 0);
}

bool CheckToanSoLe(int n)
{
	if(n == 0) // Đk dừng (đk thỏa tất là tất cả chữ số trong số nguyên n đều là số lẻ)
		return true;
    if(n % 2 == 0) // Nếu n chia hết cho 2 -> FALSE (chỉ cần 1 chữ số trong n chia hết cho 2 -> SAI)
    	return false;
    if(n % 2 != 0) // Nếu n không chia hết cho 2 
   		return CheckToanSoLe(n/10);
}

void main()
{
    int num;
    NhapSo(&num);
    if(CheckToanSoLe(num))
    	printf("%d co toan chu so le",num);
    else
    	printf("%d khong co toan chu so le",num);
}
