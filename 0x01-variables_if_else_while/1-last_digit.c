#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if a number is less than or greater than 6
 * Return: returns 0 (success)
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, z);
	}
	else if (z == 0)
	{
		printf("Last digit of %d is %d and is 0", n, z);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, z);
	}
	return (0);
}
