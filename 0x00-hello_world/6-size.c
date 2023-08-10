#include <stdio.h>
/**
 * main - prints the size of various types on the computer using the printf function.
 * Return: 0 to show success.
 */
int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a  long: %zu bytes\n", sizeof(long));
	printf("Size of a long long: %zu bytes\n", sizeof(long long));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
