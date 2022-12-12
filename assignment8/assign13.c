// 13.   Write a C program which reads a C source file and
// determines the percentage of characters which are part of comments.

#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    int c, count = 0, total = 0;
    int in_comment = 0;
    if (argc != 2)
    {
        printf("Usage: %s filename \r ", argv[0]);
        return 1;
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Error opening file %s \r ", argv[1]);
        return 1;
    }
    while ((c = fgetc(fp)) != EOF)
    {
        if (c == '/' && in_comment == 0)
        {
            c = fgetc(fp);
            if (c == '*')
            {
                in_comment = 1;
                count++;
            }
        }
        else if (c == '*' && in_comment == 1)
        {
            c = fgetc(fp);
            if (c == '/')
            {
                in_comment = 0;
                count++;
            }
        }
        else if (in_comment == 1)
        {
            count++;
        }
        total++;
    }
    printf(" Percentage of characters which are part of comments: %f \r ", (float)count / total * 100);
    fclose(fp);
    return 0;
}
