#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
    int len = strlen(str);
    if(str[len-1] == '\n')
        str[len-1] = '\0';
}

int ViTriDauTienChuoi2XuatHienTrongChuoi1(char s1[], char s2[], int len1, int len2)
{
    int i, j;
    for(i = 0; i < len1; i++)
    {
        if(s1[i] == s2[0])
        {
            for(j = 1; j < len2; j++)
            {
                if(s1[i+j] != s2[j])
                    break;
            }
            if(j == len2)
            {
                return i;
            }
        }
    }
    return -1;
}

void main()
{
    char s1[MAX];
    printf("Nhap chuoi thu nhat: ");
    fgets(s1, MAX, stdin);
    XoaKiTuXuongDong(s1);
    printf("Chuoi thu nhat sau khi nhap la: ");
    puts(s1);

    int len1 = strlen(s1);

    char s2[MAX];
    printf("Nhap chuoi thu hai: ");
    fgets(s2, MAX, stdin);
    XoaKiTuXuongDong(s2);
    printf("Chuoi thu hai sau khi nhap la: ");
    puts(s2);

    int len2 = strlen(s2);

    if(ViTriDauTienChuoi2XuatHienTrongChuoi1(s1,s2,len1,len2) != -1)
    {
        printf("Chuoi '%s' xuat hien o vi tri %d trong chuoi '%s'",s2,ViTriDauTienChuoi2XuatHienTrongChuoi1(s1,s2,len1,len2),s1);
    }
    else
    {
        printf("Khong ton tai chuoi '%s' trong chuoi '%s'",s2,s1);
    }
}