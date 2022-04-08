#include<stdio.h>

/**
 * main - returns numbers in hexadecima;
 * Return: returns 0 (success)
 */
int main(void)
{
	int x;
	char ch;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
