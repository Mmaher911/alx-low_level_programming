#include "lists.h"

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 *
 * Description: adds a new node at the beginning
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_head = malloc(sizeof(list_t));

	if (!head || !temp_head)
		return (NULL);
	if (str)
	{
		temp_head->str = _strdup(str);
		if (!temp_head->str)
		{
			free(temp_head);
			return (null);
		}
		temp_head->len = _strlen(temp_head->str);
	}

	temp_head->next = *head;
	*head = temp_head;
	return (temp_head);
}
