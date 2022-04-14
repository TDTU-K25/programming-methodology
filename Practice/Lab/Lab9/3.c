#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
    int len = strlen(str);
    if(str[len - 1] == '\n')
        str[len - 1] = '\0';
}

void DocFile(char fileName[], char str[], int arr[], int *n)
{
    FILE *fread;
    fread = fopen(fileName, "r");

    fgets(str, MAX, fread);
    XoaKiTuXuongDong(str);

    *n = 0;
    int i = 0;
    while(fscanf(fread, "%d", &arr[i]) != EOF)
    {
        i++;
        *n = *n + 1;
    }

    fclose(fread);
}

void XuatMang(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

bool KiemTraNoiDungCoTrongChuoi(char str[], char content[])
{
    int len = strlen(str);
    int len_content = strlen(content);

    int i, j;
    for(i = 0; i < len; i++)
    {
        if(str[i] == content[0])
        {
            for(j = 1; j < len_content; j++)
            {
                if(str[i+j] != content[j])
                    break;
            }
            if(j == len_content)
                return true;
        }
    }
    return false;
}

bool KiemTraPhanTuCoTonTaiTrongMang(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
             return true;
    }
    return false;
}

void main()
{
    char fileName[MAX];
    char str[MAX];
    int  arr[MAX];
    int n;

    printf("Enter a file name: ");
    fgets(fileName, MAX, stdin);
    XoaKiTuXuongDong(fileName);

    DocFile(fileName,str,arr,&n);

    int choice;
    printf("\n----------MENU----------");
    printf("\n1. Thao tac tren chuoi");
    printf("\n2. Thao tac tren mang");
    printf("\nChon 1 trong 2 thao tac tren: ");
    scanf("%d",&choice);
    
	// Xóa kí tự '\n' ra khỏi bộ nhớ đệm
	char c;
    while((c = getchar()) != '\n' && c != EOF); // lặp đến khi nào gán được kí tự '\n' cho biến c -> lúc này bộ nhớ đệm không còn kí tự '\n\
	// 

    FILE *fwrite;
    fwrite = fopen("output03.txt", "w");

    switch (choice)
    {
    case 1:
        printf("\nChuoi la: %s",str);
        char word[MAX];
        printf("\nNhap noi dung can tim: ");
        fgets(word, MAX, stdin);
        XoaKiTuXuongDong(word);
        if(KiemTraNoiDungCoTrongChuoi(str,word))
            fprintf(fwrite,"Co noi dung can tim");
        else 
            fprintf(fwrite,"Khong co noi dung can tim");
        break;

    case 2:
        printf("\nMang la: ");
        XuatMang(arr,n);
        int key;
        printf("\nNhap gia tri can tim: ");
        scanf("%d",&key);
        if(KiemTraPhanTuCoTonTaiTrongMang(arr,n,key))
            fprintf(fwrite,"Co noi dung can tim");
        else 
            fprintf(fwrite,"Khong co noi dung can tim");
        break;
    
    default:
        printf("\nNhap sai");
        break;
    }

    fclose(fwrite);
}
