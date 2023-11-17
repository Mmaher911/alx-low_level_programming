#include "lists.h"

/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 *
 * Description: adds a new node at the end of linked list
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp_tail = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !temp_tail)
		return (NULL);
	if (str)
	{
		temp_tail->str = strdup(str);
		if (!temp_tail->str)
		{
			free(temp_tail);
			return (NULL);
		}
		temp_tail->len = _strlen(temp_tail->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = temp_tail;
	}
	else
		*head = temp_tail;
	return (temp_tail);
}
