#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

void XoaKiTuXuongDong(char str[])
{
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] ='\0';
}

int FirstPositionOfWordInString(char str[], char word[], int len, int len_word)
{
	int i, j; // biến chạy
	for(i = 0; i < len; i++) // chạy từ đầu đến cuối chuỗi 
	{
		if(str[i] == word[0]) // nếu ký tự trong CHUỖI GIỐNG ký tự ĐẦU TIÊN của TỪ
		{
			for(j = 1; j < len_word; j++) // i bắt đầu từ vị trí 1 vì đã kiểm tra vị trí 0 ở câu if trên 
			{
				if(str[i+j] != word[j]) // khác thì out khỏi vòng lặp kiểm tra kí tự tiếp theo trong CHUỖI
					break;
			}
			if(j == len_word) // Tồn tại từ trong chuỗi 
			{
				return i; // Trả về vị trí của kí tự đầu của từ xuất hiện trong chuỗi
			}
		}
	}
	return -1; // Không tồn tại từ trong chuỗi
}

void main()
{
	char str[MAX];
	printf("Nhap chuoi: ");
	fgets(str, MAX, stdin);
	XoaKiTuXuongDong(str);
	printf("Chuoi da nhap la: ");
	puts(str);
	
	int len = strlen(str);
	
	char word[MAX];
	printf("Nhap tu: ");
	fgets(word, MAX, stdin);
	XoaKiTuXuongDong(word);
	printf("Tu da nhap la: ");
	puts(word);

	int len_word = strlen(word);

	if(FirstPositionOfWordInString(str,word,len,len_word) != -1)
	{
		printf("Tu '%s' xuat hien lan dau tien o vi tri thu %d trong chuoi la: ",word,FirstPositionOfWordInString(str,word,len,len_word));
	}
	else 
		printf("Khong ton tai tu '%s' trong chuoi",word);
}
