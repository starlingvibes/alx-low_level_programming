#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters 10x
 */
void print_alphabet_x10(void)
{
	char le;
	int x;
	x = 1;
	for (x <= 10)
	{

		le = 'a';

		while (le <= 'z')
		{
			_putchar(le);
		}
		_putchar('\n');
	}
}
