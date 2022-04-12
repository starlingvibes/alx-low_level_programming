#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0.
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
