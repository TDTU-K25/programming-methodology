#include <stdio.h>

void main()
{	
	FILE *file_in;

	file_in = fopen("input01.txt", "r");
		
	if (file_in == NULL)
	{	
		printf("Error Reading File");	
		return ;	
	}
	
	int num;
	int sum = 0;
	
	while (fscanf(file_in, "%d,", &num) != EOF)
	{
		sum += num;
	}
	
	fclose(file_in);
	
	FILE *file_out;
	
	file_out = fopen("output01.txt","w");
	
	fprintf(file_out, "Sum = %d", sum);
	
	fclose(file_out);
	
	return ;

}
