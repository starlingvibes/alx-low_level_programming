#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to look in
 * @needle: string to look for
 * Return: a pointer to the beginning of the located
 * substring, NULL is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
