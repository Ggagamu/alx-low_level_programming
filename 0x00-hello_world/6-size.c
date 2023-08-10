#include <stdio.h>
/**
 * main - prints the size of various types on the computer using the printf function.
 * Return: 0 to show success.
 */
int main(void)
{
	printf("Size of a char: %zu bytes\n", size_t(char));
	printf("Size of an int: %zu bytes\n", size_t(int));
	printf("Size of a  long: %zu bytes\n", size_t(long));
	printf("Size of a long long: %zu bytes\n", size_t(long long));
	printf("Size of a float: %zu bytes\n", size_t(float));
	return (0);
}
