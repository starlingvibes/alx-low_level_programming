#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	return (0);
}
