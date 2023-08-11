#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that prints the last digit of the number stored in
 * the variable n with printf function.
 * Return: 0 to show success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if((n%10) > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n%10);
	}
	else if((n%10) < 6 && (n%10) != 0)
	{
		printf("Last digit of n is %d and is less than 6amd not 0\n", n%10);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", n%10);
	}
	return (0);
}