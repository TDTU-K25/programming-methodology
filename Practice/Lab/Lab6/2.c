#include <stdio.h>

void NhapN(int *n)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&*n);
        if(*n < 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*n < 0);
}

int GiaiThua(int n)
{
    if(n == 0)
        return 1;
    return n * GiaiThua(n-1);
}

void main()
{
    int n;
    NhapN(&n);
    printf("%d! = %d",n,GiaiThua(n));
}