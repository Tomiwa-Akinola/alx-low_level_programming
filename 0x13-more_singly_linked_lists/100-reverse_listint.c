#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to first element
 * Return: pointerto the first element of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new_temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		new_temp = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (new_temp == NULL)
			return (*head);
		*head = new_temp;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
