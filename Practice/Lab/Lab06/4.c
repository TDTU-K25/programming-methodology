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

void NhapX(int *x)
{
    do
    {
        printf("Nhap x: ");
        scanf("%d",&*x);
        if(*x <= 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*x <= 0);
}

int xMuN(int x, int n)
{
    if(n == 0)
        return 1;
    return x * xMuN(x,n-1);
}

void main()
{
    int x;
    NhapX(&x);
    int n;
    NhapN(&n);
    printf("%d^%d = %d",x,n,xMuN(x,n));
}
