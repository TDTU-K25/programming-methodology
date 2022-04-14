#include <stdio.h>
#define MAX 100

void NhapSoPhanTu(int *n)
{
    do
    {
        printf("Nhap so phan tu: ");
        scanf("%d",&*n);
        if (*n <= 0)
        {
            printf("Nhap sai, nhap lai!\n");
        }
    } while (*n <= 0);
}

void NhapMang(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void XuatMang(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}

void DemSoLanLapCuaPhanTu(int a[], int n)
{
    int temp[MAX];
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                temp[j] = -1;
            }
        }   
        if(temp[i] != -1)
            printf("\nChu so %d bi lap lai %d lan",a[i],count);
    }
}

void main()
{
    int n;
    int a[MAX];
    NhapSoPhanTu(&n);
    NhapMang(a,n);
    printf("Mang la: ");
    XuatMang(a,n);
	
    DemSoLanLapCuaPhanTu(a,n);
}
