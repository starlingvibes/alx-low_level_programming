#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string to check
 * @c: the character to locate
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int n;

	while (1)
	{
		n = *s++;
		if (n == c)
		{
			return (s - 1);
		}
		if (n == 0)
		{
			return (NULL);
		}
	}
}
