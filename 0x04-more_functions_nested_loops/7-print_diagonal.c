#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 1)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
