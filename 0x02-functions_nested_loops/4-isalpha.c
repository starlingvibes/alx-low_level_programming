#include "main.h"

/**
 * _isalpha - checks if an input is a letter
 * @c: the character to check
 * Return: returns 1 if input is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
}
