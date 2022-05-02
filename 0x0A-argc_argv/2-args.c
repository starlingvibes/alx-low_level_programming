#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
