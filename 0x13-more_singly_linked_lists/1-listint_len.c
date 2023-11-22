#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list.
 * @h: head of pointer
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

