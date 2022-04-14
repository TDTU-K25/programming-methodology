#include <stdio.h>
#include<math.h>
#define MAX 100

void input(int *n)
{
    do
    {
        printf("Nhap so canh: ");
        scanf("%d",&*n);
        if(*n < 0 || *n > MAX) 
			printf("\nNhap sai!\nNhap lai!\n");
    } while (*n < 0 || *n > MAX);
}

void NhapMang(int a[][MAX], int n)
{
	int i, j;
    for(i = 0; i < n; i++) 
    { 
		for(j = 0; j < n; j++) 
	    {
	        printf("Nhap phan tu thu [%d][%d]:",i,j);
	        scanf("%d",&a[i][j]);
	    }
	}
}

void HoanVi(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int DinhThucMaTran(int a[][MAX], int n)
{
    int num1, num2, det = 1, index, total = 1, i;
 

    int temp[n + 1];
 

    for (i = 0; i < n; i++)
    {
        index = i; 
 

        while (a[index][i] == 0 && index < n)
        {
            index++;
        }
        if (index == n) 
        {

            continue;
        }
        if (index != i)
        {
			int j;
            for (j = 0; j < n; j++)
            {
                HoanVi(&a[index][j], &a[i][j]);
            }

            det = det * pow(-1, index - i);
        }
		int j;
        for (j = 0; j < n; j++)
        {
            temp[j] = a[i][j];
        }
        for (j = i + 1; j < n; j++)
        {
            num1 = temp[i];
            num2 = a[j][i];
            int k;
            for (k = 0; k < n; k++)
            {
                a[j][k] = (num1 * a[j][k]) - (num2 * temp[k]);
            }
            total = total * num1;
        }
    }
    for (i = 0; i < n; i++)
    {
        det = det * a[i][i];
    }
    return (int)det/total; 
}

void main()
{                    
    int a[MAX][MAX];
    int n;
    input(&n);
    NhapMang(a,n);
    printf("Dinh thuc cua ma tran la: %d",DinhThucMaTran(a, n));
}
