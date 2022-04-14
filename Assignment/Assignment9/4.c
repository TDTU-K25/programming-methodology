#include <stdio.h>
#include <math.h>

void NhapN(int *n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&*n);
        if(*n <= 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*n <= 0);
}

int TongBinhPhuong(int n)
{
    if(n == 1) // Điều kiện dừng
        return 1;
   	return pow(n,2) + TongBinhPhuong(n-1);
}

void main()
{
    int n;
    NhapN(&n);
    printf("Sum = %d",TongBinhPhuong(n));
}
