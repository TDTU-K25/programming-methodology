#include <stdio.h>

int main()
{
	char c;
	
	printf("Nhap mot ki tu: ");
	scanf("%c",&c);
	
	if(c >= 65 && c <= 70)
		printf("Ban vua nhap mot ki tu viet hoa");
	else if(c >= 97 && c <= 122)
		printf("Ban vua nhap mot ki tu viet thuong");
	else if(c >= 48 && c <= 57)
		printf("Ban vua nhap mot chu so");
}
