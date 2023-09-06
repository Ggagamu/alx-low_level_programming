#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int lang, l, m;

	lang = 0;
	m = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			lang = 0;
		else if (lang == 0)
		{
			lang = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **color, *neo;
	int i, k = 0, les = 0, ogre, c = 0, start, end;

	while (*(str + les))
		les++;
	ogre = count_word(str);
	if (ogre == 0)
		return (NULL);

	color = (char **) malloc(sizeof(char *) * (ogre + 1));
	if (color == NULL)
		return (NULL);

	for (i = 0; i <= les; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				neo = (char *) malloc(sizeof(char) * (c + 1));
				if (neo == NULL)
					return (NULL);
				while (start < end)
					*neo++ = str[start++];
				*neo = '\0';
				color[k] = neo - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	color[k] = NULL;

	return (color);
}
