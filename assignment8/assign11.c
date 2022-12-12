// Assignment 8
// Q11.Write a program which reads a C source file
// having comments (between /* and */) and copies it
// to another file leaving the comments.
#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");
    char ch;
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == '/')
        {
            ch = fgetc(fp1);
            if (ch == '*')
            {
                while ((ch = fgetc(fp1)) != '*')
                {
                    if (ch == EOF)
                    {
                        break;
                    }
                }
                ch = fgetc(fp1);
                if (ch == '/')
                {
                    ch = fgetc(fp1);
                    if (ch == EOF)
                    {
                        break;
                    }
                }
            }
        }
        fputc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}