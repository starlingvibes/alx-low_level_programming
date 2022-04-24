#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: a string to be encoded
 * Return: returns encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = cod[j];
				break;
			}
		}
		j = 0;
	}
	return (s);
}
