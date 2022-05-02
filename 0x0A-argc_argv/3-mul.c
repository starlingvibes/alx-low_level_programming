#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: the argument vector
 * Return: 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int res;

		res = *argv[1] * *argv[2];
		printf("%d\n", *res);
	}
	
	return (0);
}
