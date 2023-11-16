#include "lists.h"

/**
 * list_len - function with one argument
 * @h: const list_t pointer argument to struct
 *
 * Description: returns the number of elements in a linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
