// Q1 Using Regular Falsi method to find the root of the equation
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i, n;
	float m, b, c, pv, fb = 0.0, fc = 0.0, fm = 0.0;
	int a[6];
	printf("Enter the highest coefficient of the equation you want \n");
	scanf("%d", &n);
	for (int i = 0; i < (n + 1); i++)
	{
		printf("Enter the constant value coressponding to coefficient of x^%d\n", (n - i));
		scanf("%d", &a[i]);
	}
	printf("\nThe corressponding function looks Like\n f(x)=");
	for (int i = 0; i < (n + 1); i++)
	{
		printf("(%dx^%d)+", a[i], (n - i));
	}
	printf("\n");
	printf("The user is asked to enter any values he finds suited to be accepted as the interval\n");
	printf("Enter the first value=");
	scanf("%f", &b);
	printf("\nEnter the Second value=");
	scanf("%f", &c);
	m = (float)((c + b) / 2);
	printf("Enter the predefined threshold value for the interval\n");
	scanf("%f", &pv);
	do
	{
		for (int i = 0; i < (n + 1); i++)
		{
			fb = (float)fb + a[i] * pow(b, (n - i));
			fc = (float)fc + a[i] * pow(c, (n - i));
			fm = (float)fm + a[i] * pow(m, (n - i));
		}
		if (fm * fb < 0)
			c = m;
		else
			b = m;

		m = (float)(b + c) / 2;
	} while (abs(fm) > pv);
	printf("\nThe root of the given quadratic equation is = %f\n", m);
	return 0;
}
