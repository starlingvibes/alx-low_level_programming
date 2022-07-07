#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head node
 *
 * Return: number of nodes in list
 */ 
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
