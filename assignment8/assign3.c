// Assignment 8
// Q3 Write a program in C whose output is the program itself in file hanling.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = NULL;
	int ch = 0;
	fp = fopen("input2.txt", "r");

	if (fp == NULL)
	{
		printf("Error in opening the file\n");
		exit(1);
	}
	do
	{
		ch = fgetc(fp);
		printf("%c", ch);

	} while (ch != EOF);
	fclose(fp);
	return 0;
}
