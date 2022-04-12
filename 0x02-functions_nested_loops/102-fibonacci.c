#include <stdio.h>

/**
 * main - returns the first 50 fibonacci numbers
 * Return: returns 0 (success)
 */
int main(void)
{
	long int a, b;
	long int c, next;

	a = 1;
	b = 2;
	for (c = 1; c <= 50; ++c)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		} else
		{
			printf("%ld\n", a);
		}
		next = a + b;
		a = b;
		b = next;
	}
	return (0);
}
