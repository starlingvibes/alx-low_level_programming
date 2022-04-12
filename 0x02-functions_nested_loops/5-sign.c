#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to read
 * Return: returns 1 if n>0, 0 is n == 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return(1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
