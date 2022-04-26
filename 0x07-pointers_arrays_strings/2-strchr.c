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

	j = strlen(s);
	for (n = 0; n < j; n++)
	{
		if (s[n] == c)
		{
			return (n);
		}
	}
	return (NULL);
}
