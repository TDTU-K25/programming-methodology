#include <stdio.h>

void main() 
{
	int i = 0;
	// How for loop works
	for(printf("\nInitialize"); printf("\nCondition"); printf("\nJump"))
	{
		if(i == 3)	
			break;
		printf("\nStatements");
		i++;
	}
	
	printf("\n\nContinue statement");
	
	for(i = 0; i < 5; i++)
	{
		if(i == 3)
			continue;
		printf("\n%d",i);
	}
	
	printf("\n\nBreak statement");
	
	for(i = 0; i < 5; i++)
	{
		if(i == 3)
			break;
		printf("\n%d",i);
	}
}
