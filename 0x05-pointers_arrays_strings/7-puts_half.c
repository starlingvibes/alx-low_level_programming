#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed in half
 */

void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i <= len - 1; i++)
		{
			putchar(str[i]);
		}
	} else if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			putchar(str[i]);
		}
	}
}
