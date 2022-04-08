#include<stdio.h>

/**
 * main - prints all possible combinations of two digits
 * Return: returns 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
