#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: head of node
 * @str: string to store
 * Return: address or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i, count = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	node->len = count;
	node->next = *head;
	*head = node;

	return (*head);
}
