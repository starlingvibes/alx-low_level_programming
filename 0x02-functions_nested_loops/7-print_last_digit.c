#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 * Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	int z;

	z = n % 10;
	
	_putchar(z);
	return (z);
}
