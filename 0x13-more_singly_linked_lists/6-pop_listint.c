#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return 0;

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return data;
}
