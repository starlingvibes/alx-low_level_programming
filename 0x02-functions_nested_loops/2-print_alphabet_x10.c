#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters 10x
 */
void print_alphabet_x10(void)
{
	char le;
	int x;
	le = 'a';
	for (x = 1; x <= 10; x++;)
	{

		while (le <= 'z')
		{
			_putchar(le);
		}
		_putchar('\n');
	}
}
