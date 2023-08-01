#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current;

		node_count = 0;
		listint_t *current = h;
		
for (current = h; current != NULL; current = current->next)

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}
