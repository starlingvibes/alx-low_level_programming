#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char le;

	le = 'a';

	while (le <= 'z')
	{
		_putchar(le);
		le++;
	}

	_putchar('\n');
}
