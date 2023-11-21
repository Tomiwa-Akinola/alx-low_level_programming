#include "lists.h"

/**
 * new_node - creates new node
 * @n: data of the node
 * Return: pointer to the node
 */

listint_t *new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first element
 * @idx: index to the position of the new node
 * @n: data of the new node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *temp_old;
	listint_t *new;

	temp = *head;
	if (head == NULL)
		return (NULL);
	new = new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		new->next = temp;
	else
	{
		temp_old = temp->next;
		temp->next = new;
		new->next = temp_old;
	}
	return (new);
}
