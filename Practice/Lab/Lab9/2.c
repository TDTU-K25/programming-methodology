#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char str[MAX];

    FILE *fread;
    fread = fopen("input02.txt", "r");

    FILE *fwrite;
    fwrite = fopen("output02.txt", "w");

    int i;
    for(i = 0; i < 5; i++)
    {
        fgets(str, MAX, fread);
        int len = strlen(str);
        if(str[len - 1] == 10)
            str[len - 1] = '\0';
        fprintf(fwrite, "%d\n", strlen(str));
    }
    
    fclose(fread);
    fclose(fwrite);
}
