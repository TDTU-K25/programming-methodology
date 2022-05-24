#include <stdio.h>

void NhapSo(int *num)
{
    do
    {
        printf("Nhap n: ");
        scanf("%d",&*num);
        if(*num <= 0)
            printf("Nhap sai, nhap lai!\n");
    } while (*num <= 0);
}

int numberOfDigit(int num)
{
    if(num <= 9)
        return 1;
    return 1 + numberOfDigit(num / 10);
}

void main()
{
    int num;
    NhapSo(&num);
    printf("The number of digits of %d is %d",num,numberOfDigit(num));
}
