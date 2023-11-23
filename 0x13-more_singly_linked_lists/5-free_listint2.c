#include "lists.h"
#include <stdlib.h>

/**
 * free_listin2 - funtion that frees a listint_t list
 * @head: a double pointers of lists
 * Return: void
 */

void free_listin2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
