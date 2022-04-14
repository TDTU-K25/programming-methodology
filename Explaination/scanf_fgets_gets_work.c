#include <stdio.h>
#include <string.h>

void main()
{
	char str1[100];
	printf("Enter string: ");
	scanf("%s",str1); 
	printf("\n%s",str1);
	
	fflush(stdin); // remove newline char in buffer
	
	char str2[100];
	printf("\nEnter string: ");
	fgets(str2, 100, stdin);
	printf("\n%s",str2);
	
	char str3[100];
	printf("\nEnter string: ");
	gets(str3);
	printf("\n%s",str3);
	
	printf("\nScanf: "); // don't read newline char and can't read whitespace 
	
	int len1 = strlen(str1);
	int i;
	for(i = 0; str1[i] != '\0'; i++)
	{
		printf("%d ",str1[i]);
	}
	
	printf("\nFgets: "); // READ newline char
	
	int len2 = strlen(str2);
	for(i = 0; str2[i] != '\0'; i++)
	{
		printf("%d ",str2[i]);
	}
	
	printf("\nGets: "); // reads newline char and replaces it with null char
	
	int len3 = strlen(str3);
	for(i = 0; str3[i] != '\0'; i++)
	{
		printf("%d ",str3[i]);
	}
}
