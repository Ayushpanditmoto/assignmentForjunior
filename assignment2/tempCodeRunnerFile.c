// Assignment 2
// Q1 If the marks obtained by a student in five different
// subjects are input through the keyboard, find out the
// aggregate marks and percentage marks obtained by the student.
// Assume that the maximum marks that can be obtained by a student
// in each subject is 100. Input error should be checked.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e, sum, avg, per;
	printf("Enter marks in five subjects: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	// check marks not greater than 100
	if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100)
	{
		printf("Marks Should be Less Than 100\n");
		exit(0);
	}
	sum = a + b + c + d + e;
	avg = sum / 5;
	per = sum * 100 / 500;
	printf("Sum: %d\nAverage: %d\nPercentage: %d\n", sum, avg, per);
	return 0;
}
