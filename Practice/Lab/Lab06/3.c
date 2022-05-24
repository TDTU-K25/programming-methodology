#include <stdio.h>
#include <math.h>

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

int HaiMuN(int n)
{
    if(n == 0)
        return 1;
    return 2 * HaiMuN(n-1);
}

void main()
{
    int n;
    NhapN(&n);
    printf("2^%d = %d",n,HaiMuN(n));
}