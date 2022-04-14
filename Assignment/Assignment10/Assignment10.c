#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void nhapSoPhanTu(int *n)
{
	do
	{
		printf("Nhap N: ");
		scanf("%d",&*n);
		if(*n <= 0)
			printf("Nhap sai, nhap lai!\n");
	} while(*n <= 0);
}

void nhapMang(int a[], int n)
{
	int min = 1, max = 99;
	int i;
	for(i = 0; i < n; i++)
	{
		a[i] = (rand() % (max-min+1)) + min;
	}
}

void xuatMang(int a[], int n)
{
	int i;
	printf("Mang la: ");
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int linearSearch(int a[], int n, int x)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
			return i;
	}
	return 0;
}

void ascendingSort(int a[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i] > a[j])
				swap(&a[i],&a[j]);
		}
	}
}

int binarySearch(int a[], int n, int x)
{
	ascendingSort(a,n);
	int left = 0, right = n - 1, mid;
	do
	{
		mid = (left + right) / 2;
		if(a[mid] == x)
			return mid;
		else
		{
			if(x < a[mid])
				right = mid - 1;
			else 
				left = mid + 1;
		}	
	} while(left <= right);
	return 0;
}

void selectionSort(int a[], int n)
{
	int i, j, min;
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(a[j] < a[min])
				min = j;
		}
		swap(&a[i], &a[min]);
	}
}

void bubbleSort(int a[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++)
	{
		for(j = n - 1; j > i;j--)
		{
			if(a[j] < a[j-1])
				swap(&a[j], &a[j-1]);
		}
	}
}

void chimXuongSort(int a[], int n)
{
	int i, j;
	for(i = n - 1; i > 0; i--)
	{
		for(j = 0; j < i; j++)
		{
			if(a[j] > a[j+1])
				swap(&a[j], &a[j+1]);
		}
	}
}

void main()
{
	srand(time(NULL));
	
	int a[MAX], n, x;
	
	int choice;

	do 
	{
		printf("\n-----------MENU-----------");
		printf("\n1. Nhap mang");
		printf("\n2. Xuat mang");
		printf("\n3. Linear search");
		printf("\n4. Binary search");
		printf("\n5. Interchange sort");
		printf("\n6. Selection sort");
		printf("\n7. Bubble sort");
		printf("\n8. Chim Xuong Sort");
		printf("\n9. Nhap X");
		printf("\n0. Thoat");
		printf("\nVui long chon so: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				nhapSoPhanTu(&n);
				nhapMang(a,n);
				break;
			case 2:
				xuatMang(a,n);
				break;
			case 3: 
				if(linearSearch(a,n,x) != 0) 
					printf("Vi tri xuat hien cua %d trong mang la %d",x,linearSearch(a,n,x));
				else
					printf("%d khong ton tai trong mang",x);
				break;
			case 4:
				if(binarySearch(a,n,x) != 0)
					printf("\nVi tri xuat hien cua %d trong mang la %d",x,binarySearch(a,n,x));
				else
					printf("\n%d khong ton tai trong mang",x);
				break;
			case 5:
				ascendingSort(a,n);
				xuatMang(a,n);
				break;
			case 6:
				selectionSort(a,n);
				xuatMang(a,n);
				break;
			case 7:
				bubbleSort(a,n);
				xuatMang(a,n);
				break;
			case 8:
				chimXuongSort(a,n);
				xuatMang(a,n);
				break;
			case 9: 
				printf("\nNhap X: ");
				scanf("%d",&x);
				break;
			case 0:
				break;
			default:
				printf("\nNhap sai, nhap lai!");
		}
	} while(choice != 0);
}
