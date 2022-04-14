// Library
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Macro definition
#define MAX_EMPLOYEES 2500
#define MAX_PROGRESS 3000
#define MAX_CHAR 30
#define MAX_CHAR_LINE 200

// Define struct
typedef struct
{
	char id[MAX_CHAR];
	char firstName[MAX_CHAR];
	char lastName[MAX_CHAR];
	char gender[MAX_CHAR];
	char dateOfBirth[MAX_CHAR];
	char department[MAX_CHAR];
	char country[MAX_CHAR];
} Employee_t;

typedef struct
{
	char employeeID[MAX_CHAR];
	char projectID[MAX_CHAR];
	char progress[MAX_CHAR];
} Progress_t;

// Common Function
void lowerString(char []);
void upperFirstCharInStr(char []);

void removeNewlineChar(char []);
void removeCR(char []);

bool isAlphaString(char []);

void swap(Employee_t *, Employee_t *);

// Function to handle file
int countRowOfFile(char []);

// Function to handle file Employee.csv
void readFileEmployee(Employee_t []);
void deleteFirstLineOfEmployeeFile(Employee_t [], int *);

// Function to handle file Progress.csv
void readFileProgress(Progress_t []);
void deleteFirstLineOfProgressFile(Progress_t [], int *);

// Handle user's input
int countSpaceInString(char []);
void splitString(char [], char [], char []);

// Exercises
void countAllEmployeesInSameDepartment(Employee_t [], char [], int, char []);
void listGender(Employee_t [], char [], int, char []);
void printAllEmployeesHasSameProgress(Progress_t [], char [], int, char []);
void averageOfProgressInSameProject(Progress_t [], char [], int, char []);
void sortNameInAscendOrder(Employee_t [], int, char []);
void sortNameInDescendOrder(Employee_t [], int, char []);
void printAllEmployeesInSameCountry(Employee_t [], char [], int, char []);

// Handle user's wrong input
void wrongSyntax();

int main()
{
	Employee_t employeeList[MAX_EMPLOYEES];
	readFileEmployee(employeeList);
	
	Progress_t progressList[MAX_PROGRESS];
	readFileProgress(progressList);
	
	int rowFileEmployee = countRowOfFile("Employee.csv"); 
	deleteFirstLineOfEmployeeFile(employeeList, &rowFileEmployee); 
	
	int rowFileProgress = countRowOfFile("Progress.csv");
	deleteFirstLineOfProgressFile(progressList, &rowFileProgress); 
	
	char fileResult[] = "result.csv";
	
	char s[60];
	fgets(s, 60, stdin);
	removeNewlineChar(s);
	
	int spacesInString = countSpaceInString(s);
	
	char command[MAX_CHAR], value[MAX_CHAR];

	if(spacesInString == 1)
	{
		splitString(s,command,value);
		
		if(strcmp(command,"list") == 0)
		{
			if(isAlphaString(value))
			{
				if(strcmp(value, "male") == 0 || strcmp(value, "female") == 0)
				{
					listGender(employeeList,value,rowFileEmployee,fileResult);
				}
				else
					wrongSyntax();
			}
			else
			{
				wrongSyntax();
			}
		}
		else if(strcmp(command,"count") == 0)
		{
			countAllEmployeesInSameDepartment(employeeList,value,rowFileEmployee,fileResult);
		}
		else if(strcmp(command,"country") == 0)
		{
			printAllEmployeesInSameCountry(employeeList,value,rowFileEmployee,fileResult);
		}
		else if(strcmp(command,"report") == 0)
		{
			if(isAlphaString(value))
			{
				wrongSyntax();
			}
			else
			{
				if(atof(value) >= 0 && atof(value) <= 1)
					printAllEmployeesHasSameProgress(progressList,value,rowFileProgress,fileResult);
				else
					wrongSyntax();
			}
		}
		else if(strcmp(command,"average") == 0)
		{	
			averageOfProgressInSameProject(progressList,value,rowFileProgress,fileResult);	
		}
		else if(strcmp(command,"sort") == 0)
		{
			if(strcmp(value,"asc") == 0)
				sortNameInAscendOrder(employeeList,rowFileEmployee,fileResult);
			else if(strcmp(value,"desc") == 0)
				sortNameInDescendOrder(employeeList,rowFileEmployee,fileResult);
			else
				wrongSyntax();
		}
		else
		{
			wrongSyntax();
		}
	}
	else
		wrongSyntax();
		
	return 0;
}

// Common Function

void lowerString(char s[])
{
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		s[i] = tolower(s[i]);
	}
}

void upperFirstCharInStr(char s[])
{
	s[0] = toupper(s[0]);
}

void removeNewlineChar(char s[])
{
	int len = strlen(s);
	if(s[len-1] == '\n')
		s[len-1] = '\0';
}

void removeCR(char s[])
{
	int len = strlen(s);
	if(s[len-1] == '\r')
		s[len-1] = '\0';
}

bool isAlphaString(char s[])
{
	int i;
	for(i = 0; s[i] != '\0' ; i++)
	{
		if(isalpha(s[i]) == 0)
			return false;
	}
	return true;
}

void swap(Employee_t *person_first, Employee_t *person_second)
{
	Employee_t temp = *person_first;
	*person_first = *person_second;
	*person_second = temp;
}

// Function to handle file

int countRowOfFile(char fileCSV[])
{
	FILE *fcsv;
	fcsv = fopen(fileCSV, "r");
	
	if(fcsv == NULL)
    {
        printf("File not found");
        exit(1);
    }
    
	int row = 0;
	char line[MAX_CHAR_LINE];
	
	while(fgets(line, MAX_CHAR_LINE, fcsv) != NULL) // fgets return NULL when the stream is at the end of the file
	{
		row += 1;
	}

	fclose(fcsv);
	
	return row;
}

// Function to handle file Employee.csv

void readFileEmployee(Employee_t employeeList[])
{
	char line[MAX_CHAR_LINE];
    char *temp;
    
    FILE *femployee;
	femployee = fopen("Employee.csv", "r");
	 
    int i = 0;
    
    while(fgets(line, MAX_CHAR_LINE, femployee) != NULL)
    {
		temp = strtok(line, ","); 
		strcpy(employeeList[i].id,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].firstName,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].lastName,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].gender,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].dateOfBirth,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].department,temp);
		
		temp = strtok(NULL, ",");
		strcpy(employeeList[i].country,temp);
		
		removeNewlineChar(employeeList[i].country);
		removeCR(employeeList[i].country);
		
		i++;
    }
    
    fclose(femployee);
}

void deleteFirstLineOfEmployeeFile(Employee_t employeeList[], int *rowFileEmployee)
{
	int i;
	for(i = 0; i < *rowFileEmployee; i++)
	{
		employeeList[i] = employeeList[i+1];
	}
	*rowFileEmployee = *rowFileEmployee - 1;
}

// Function to handle file Progress.csv

void readFileProgress(Progress_t progressList[])
{
	char line[MAX_CHAR_LINE]; 
    char *temp;
    
    FILE *fprogress;
	fprogress = fopen("Progress.csv", "r");
	
    int i = 0;
    
    while(fgets(line, MAX_CHAR_LINE, fprogress) != NULL)
    {
		temp = strtok(line, ","); 
		strcpy(progressList[i].employeeID,temp);
		
		temp = strtok(NULL, ",");
		strcpy(progressList[i].projectID,temp);
		
		temp = strtok(NULL, ",");
		strcpy(progressList[i].progress,temp);
		
		removeNewlineChar(progressList[i].progress);
		removeCR(progressList[i].progress);
		
		i++;
    }
    
    fclose(fprogress);
}

void deleteFirstLineOfProgressFile(Progress_t progressList[], int *rowFileProgress)
{
	int i;
	for(i = 0; i < *rowFileProgress; i++)
	{
		progressList[i] = progressList[i+1];
	}
	*rowFileProgress = *rowFileProgress - 1;
}

// Handle user's input

int countSpaceInString(char s[])
{
	int count = 0;
	
	int i;
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ')
			count++;
	}
	return count;
}

void splitString(char s[], char command[], char value[])
{	
	char *temp;
	
	temp = strtok(s," ");
	strcpy(command, temp);
	lowerString(command);
	
	temp = strtok(NULL," ");
	strcpy(value, temp);
	lowerString(value);
}

// Exercises

void countAllEmployeesInSameDepartment(Employee_t employeeList[], char value[], int rowFileEmployee, char fileResult[])
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	int count = 0;
	
	int i;
	for(i = 0; i < rowFileEmployee; i++)
	{
		if(strcmp(employeeList[i].department, value) == 0)
		{
			count++;
		}
	}
	fprintf(fresult,"%d\n",count);
	
	fclose(fresult);
}

void listGender(Employee_t employeeList[], char value[], int rowFileEmployee, char fileResult[])
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	upperFirstCharInStr(value);
	
	int i;
	for(i = 0; i < rowFileEmployee; i++)
	{
		if(strcmp(employeeList[i].gender,value) == 0)
		{
			fprintf(fresult,"%s,%s,%s,%s,%s,%s,%s\n",employeeList[i].id,employeeList[i].firstName,employeeList[i].lastName,employeeList[i].gender,employeeList[i].dateOfBirth,employeeList[i].department,employeeList[i].country);
		}
	}
	
	fclose(fresult);
}

void printAllEmployeesHasSameProgress(Progress_t progressList[], char value[], int rowFileProgress, char fileResult[]) 
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	Progress_t employeeListHasSameProgress[500];
	
	int i, j;
	int count = 0;
	
	for(i = 0; i < rowFileProgress; i++) // count the number of employees who have same progress and store them into a list
	{
		if(atof(progressList[i].progress) == atof(value))
		{
			strcpy(employeeListHasSameProgress[count].employeeID, progressList[i].employeeID);
			count++;		
		}
	}
	
	int temp[500];
	
	for(i = 0; i < count - 1; i++) // find the same ID in a list and "tick" them by an array temp[], make sure just write into a file info of each employee just one time (In case: employee has the same progress in different projects)
	{
		for(j = i + 1; j < count; j++)
		{
			if(strcmp(employeeListHasSameProgress[i].employeeID, employeeListHasSameProgress[j].employeeID) == 0)
			{
				temp[j] = -1;
			}
		}
	}
	
	for(i = 0; i < count; i++) // Print
	{
		if(temp[i] != -1)
			fprintf(fresult,"%s\n",employeeListHasSameProgress[i].employeeID);
	}
	
	fclose(fresult);
}

void averageOfProgressInSameProject(Progress_t progressList[], char value[], int rowFileProgress, char fileResult[])
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	int count = 0;
	double sum = 0;
	
	int i;
	for(i = 0; i < rowFileProgress; i++)
	{
		if(strcmp(progressList[i].projectID, value) == 0)
		{
			sum += atof(progressList[i].progress);
			count++;
		}
	}
	
	if(count == 0)
		fprintf(fresult,"%d\n",count);
	else
		fprintf(fresult,"%.3lf\n",sum / count);
		
	fclose(fresult);
}


void sortNameInAscendOrder(Employee_t employeeList[], int rowFileEmployee, char fileResult[]) 
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	char temp_str_first[MAX_CHAR], temp_str_second[MAX_CHAR]; // temp string to store the original value of string before change it to string with lowercase chars
	
	int i, j;
	for(i = 0; i < rowFileEmployee - 1; i++) // Interchange Sort
	{
		for(j = i + 1; j < rowFileEmployee; j++)
		{
			strcpy(temp_str_first, employeeList[i].lastName); 
			strcpy(temp_str_second, employeeList[j].lastName);
			
			lowerString(temp_str_first); 
			lowerString(temp_str_second);
			
			if(strcmp(temp_str_first, temp_str_second) > 0) // >0 nếu kí tự đầu tiên trong chuỗi bên trái có giá trị ASCII lớn hơn kí tự đầu tiên trong chuỗi bên phải
				swap(&employeeList[i],&employeeList[j]);
			else
			{
				if(strcmp(temp_str_first, temp_str_second) == 0) // all of the characters in both strings are same
				{
					if(strcmp(employeeList[i].firstName,employeeList[j].firstName) > 0)  
					{
						swap(&employeeList[i],&employeeList[j]);
					}
				}
			}
		}
	}
	
	for(i = 0; i < rowFileEmployee; i++) // Print 
	{
		fprintf(fresult,"%s,%s,%s,%s,%s,%s,%s\n",employeeList[i].id,employeeList[i].firstName,employeeList[i].lastName,employeeList[i].gender,employeeList[i].dateOfBirth,employeeList[i].department,employeeList[i].country);
	}
	fclose(fresult);
}

void sortNameInDescendOrder(Employee_t employeeList[], int rowFileEmployee, char fileResult[]) 
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	char temp_str_first[MAX_CHAR], temp_str_second[MAX_CHAR]; // temp string to store the original value of string before being changed to string with lowercase chars
	
	int i, j;
	for(i = 0; i < rowFileEmployee - 1; i++) // Interchange Sort
	{
		for(j = i + 1; j < rowFileEmployee; j++)
		{
			strcpy(temp_str_first, employeeList[i].lastName); 
			strcpy(temp_str_second, employeeList[j].lastName);
			
			lowerString(temp_str_first); 
			lowerString(temp_str_second); 
			
			if(strcmp(temp_str_first, temp_str_second) < 0) // <0 nếu kí tự đầu tiên trong chuỗi bên trái có giá trị ASCII nhỏ hơn kí tự đầu tiên trong chuỗi bên phải
				swap(&employeeList[i],&employeeList[j]);
			else
			{
				if(strcmp(temp_str_first, temp_str_second) == 0) // all of the characters in both strings are same
				{
					if(strcmp(employeeList[i].firstName,employeeList[j].firstName) > 0) 
					{
						swap(&employeeList[i],&employeeList[j]);
					}
				}
			}
		}
	}
	
	for(i = 0; i < rowFileEmployee; i++)
	{
		fprintf(fresult,"%s,%s,%s,%s,%s,%s,%s\n",employeeList[i].id,employeeList[i].firstName,employeeList[i].lastName,employeeList[i].gender,employeeList[i].dateOfBirth,employeeList[i].department,employeeList[i].country);
	}
	fclose(fresult);
}

void printAllEmployeesInSameCountry(Employee_t employeeList[], char value[], int rowFileEmployee, char fileResult[]) 
{
	FILE *fresult;
	fresult = fopen(fileResult,"w");
	
	upperFirstCharInStr(value);
	
	int i;
	for(i = 0; i < rowFileEmployee; i++)
	{
		if(strcmp(employeeList[i].country,value) == 0)
		{
			fprintf(fresult,"%s,%s,%s,%s,%s,%s,%s\n",employeeList[i].id,employeeList[i].firstName,employeeList[i].lastName,employeeList[i].gender,employeeList[i].dateOfBirth,employeeList[i].department,employeeList[i].country);
		}	
	}
			
	fclose(fresult);
}

// Handle user's wrong input

void wrongSyntax()
{
	FILE *fcheck;
	fcheck = fopen("check.txt","w");
	fprintf(fcheck,"%s","wrong syntax");
	fclose(fcheck);
}
