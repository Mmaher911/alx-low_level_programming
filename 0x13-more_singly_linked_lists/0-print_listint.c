#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list to first node
 *
 * Return: numbers of lists
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nnodes);
}
