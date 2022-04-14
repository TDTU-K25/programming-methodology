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

int cauA(int n)
{
    if(n == 1)
        return 3;
    return (2*n + 1) + cauA(n - 1);
}

float cauB(int n)
{
   if(n == 1) 
        return 1.0 / 2;
    return (float)n / 2 + cauB(n - 1);
}

int giaiThua(int n)
{
    if(n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

int cauC(int n)
{
    if(n == 1)
        return 1;
    return giaiThua(n) + cauC(n-1);
}

float cauD(int n)
{
	if(n == 1)
		return 1;
	return sqrt(n) + cauD(n-1);
}

int cauE(int n)
{
	if(n == 1)
		return 1;
	return giaiThua(n) * cauE(n-1);
}

void main()
{
    int n;
    NhapN(&n);
    printf("a) %d",cauA(n));
    printf("\nb) %.1f",cauB(n));
    printf("\nc) %d",cauC(n));
    printf("\nd) %f",cauD(n));
    printf("\ne) %d",cauE(n));
}
