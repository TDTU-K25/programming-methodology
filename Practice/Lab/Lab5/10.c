#include <stdio.h>
#include <string.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

void DichChuyenKiTuSangPhai(char s1[], int *len1, int position) 
{
	int i;
	for(i = *len1 + 1; i > position; i--) // VD: str[] = "abcd" => strlen(str) = 4 (đã bỏ kí tự '\n'), '\0' nằm ở vị trí thứ 4 => dịch chuỗi phải đi từ i = 4 + 1 = 5
	{
		s1[i] = s1[i-1]; // dịch các kí tự sang phải
	}
	*len1 = *len1 + 1; // tăng kích thước chuỗi
}

void ChenChuoi(char s1[], char s2[], int *len1, int len2, int position)
{
	int i;
	for(i = 0; i < len2; i++) // Dịch chuỗi sang phải với số lần ứng với số phần từ của chuỗi cần chèn
	{	
		DichChuyenKiTuSangPhai(s1,&*len1,position);
	//	printf("%s\n",s1); In ra để kiểm tra chuỗi khi dịch sang phải
	}
	// Dịch sang phải trước rồi chèn sau sẽ dễ hơn vừa dịch vừa chèn
	for(i = 0; i < len2; i++) // Chèn từng kí tự ở chuỗi thứ 2 vào những chỗ xuất hiện khi dịch chuỗi
	{
		s1[position + i] = s2[i]; // Từ vị trí muốn chèn, chèn các phần tử từ chuỗi 2 vào
	/* VD: chuỗi 1 sau khi dịch phải là: "abcddddef", chuỗi 2 là "xyz", muốn chèn chuỗi 2 vào chuỗi 1 ở vị trí thứ 3
		i = 0 => position = 3 + 0=> s1[3] = s2[0] => Chuỗi 1: "abcxdddef"
		i = 1 => position = 3 + 1 => s1[4] = s2[1] => Chuỗi 1: "abcxyddef"
		i = 2 => position = 3 + 2 => s1[5] = s2[2] => Chuỗi 1: "abcxyzdef"
		i = 3 < len2 (vô lý) => Thoát khỏi vòng lặp
	*/
	}
}

void main()
{
	char s1[MAX];
	printf("Nhap chuoi thu nhat: ");
	fgets(s1, MAX, stdin);
	XoaKiTuXuongDong(s1);
	printf("Chuoi thu nhat da nhap la: ");
	puts(s1);
	
	int len1 = strlen(s1);
	
	char s2[MAX];
	printf("Nhap chuoi thu hai: ");
	fgets(s2, MAX, stdin);
	XoaKiTuXuongDong(s2);
	printf("Chuoi thu hai da nhap la: ");
	puts(s2);
	
	int len2 = strlen(s2);
	
	int position;
	printf("Nhap vi tri muon chen chuoi thu hai vao chuoi thu nhat: ");
	scanf("%d",&position);
	
	ChenChuoi(s1,s2,&len1,len2,position);
	printf("Chuoi sau khi chen la: ");
	puts(s1);
}
