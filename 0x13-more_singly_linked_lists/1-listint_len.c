#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements (nodes) in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		node_count++;
	}

	return (node_count);
}
