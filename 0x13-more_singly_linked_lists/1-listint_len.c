#include "lists.h"

/**
 * listint_len - returns the number in a linked list
 * @h: pointer to first node of a list
 *
 * Return: numbers of lists
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
