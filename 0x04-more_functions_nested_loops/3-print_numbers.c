#include "main.h"

/**
 * print_numbers - display numbers from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n");
}
