#include "main.h"

/**
 * print_line - draw straight line in the terminal
 * @n: number of times to print _
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
