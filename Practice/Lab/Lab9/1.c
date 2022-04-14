#include <stdio.h>

void main()
{
    int num, sum = 0;

    FILE *fread;
    fread = fopen("input01.txt", "r");

    int i;
    for(i = 0; i < 20; i++)
    {
        fscanf(fread,"%d",&num);
        sum += num;
    }
    fclose(fread);

    FILE *fwrite;
    fwrite = fopen("output01.txt", "w");
    fprintf(fwrite, "Sum = %d", sum);
    fclose(fwrite);
}