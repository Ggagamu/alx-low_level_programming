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
	int lastDigit = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(lastDigit > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", lastDigit);
	}
	ifelse(lastDigit = 0)
	{
		printf("Last digit of n is %d and is 0\n", lastDigit);
	}
	else(6>lastDigit!=0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", lastDigit);
	}
	return (0);
}
