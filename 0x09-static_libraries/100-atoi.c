#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, c, k, len, i, digit;

	j = 0;
	c = 0;
	k = 0;
	len = 0;
	i = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && i == 0)
	{
		if (s[j] == '-')
			++c;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (c % 2)
				digit = -digit;
			k = k * 10 + digit;
			i = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			i = 0;
		}
		j++;
	}

	if (i == 0)
		return (0);
	return (k);
}
