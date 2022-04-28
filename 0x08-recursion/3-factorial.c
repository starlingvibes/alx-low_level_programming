#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number whose factorial is to be computed
 * Return: -1 is n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
