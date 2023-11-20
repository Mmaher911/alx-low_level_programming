#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: poniter to head of a list
 * @n: n element
 *
 * Return: NULL if it fails
 *         Otherwise - the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
