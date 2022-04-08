#include<stdio.h>

/**
 * main - returns lowercase letters excluding q and e
 * Return: returns 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		if (ch == 'e' || 'q')
		{
			ch = '\0';
		}
	}
	putchar('\n');
	return (0);
}
