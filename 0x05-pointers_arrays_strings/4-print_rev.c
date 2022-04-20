#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i] + '0');
	}
}
