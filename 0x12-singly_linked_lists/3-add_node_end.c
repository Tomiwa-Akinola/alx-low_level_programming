#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the node
 * @str: string
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;
	unsigned int i, count = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	node->len = count;
	node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (*head);
}
