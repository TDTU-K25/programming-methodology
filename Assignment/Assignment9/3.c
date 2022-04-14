#include <stdio.h>

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

int Tich(int n)
{
    if(2*n + 1 == 3) // điều kiện dừng khi n = 1
        return 3; // 1 * 3
   	return (2*n+1) * Tich(n-1);
}

void main()
{
    int n;
    NhapN(&n);
    printf("Product = %d",Tich(n));
}
