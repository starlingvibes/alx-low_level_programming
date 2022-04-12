#include <stdio.h>

/**
 * main - returns the sum of multiples of 3 or 5
 * below 1024 (excluded)
 * Return: returns sum (success)
 */
int main(void)
{
	int sum;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf ("%d\n", sum);
}
