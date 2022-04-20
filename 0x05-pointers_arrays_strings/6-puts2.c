#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the input string
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	len = len - 1;
	for (i = 0; i <= len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
