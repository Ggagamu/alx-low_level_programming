#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that shows whether the number stored in the variable n is
 * positive or negative with printf function.
 * Return: 0 to show success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
