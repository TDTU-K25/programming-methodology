#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{	
	FILE *file_in;

	file_in = fopen("input02.txt", "r");
		
	if (file_in == NULL)
	{	
		printf("Error Reading File");	
		return ;	
	}
	
	char s[MAX];
	
	FILE *file_out;
	
	file_out = fopen("output02.txt","w");
	
	while (!feof(file_in))
	{
		fgets(s, MAX, file_in);
		
		if(s[strlen(s) - 1] == 10)
			s[strlen(s) - 1] = '\0';
			
		fprintf(file_out, "%d\n", strlen(s));
	}
	
	fclose(file_in);
	fclose(file_out);

	return ;

}
