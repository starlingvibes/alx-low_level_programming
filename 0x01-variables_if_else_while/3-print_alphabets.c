#include<stdio.h>

/**
 * main - returns small then capital alphabets
 * Return: returns 0 (success)
 */
int main(void)
{
	char ch;
	char up;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		puchar(up);
	}
	putchar('\n');
	return (0);
}
