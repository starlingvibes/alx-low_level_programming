#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array of integers
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
