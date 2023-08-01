#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}

/**
 * main - Example usage of print_listint function.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *node1 = malloc(sizeof(listint_t));
	listint_t *node2 = malloc(sizeof(listint_t));
	listint_t *node3 = malloc(sizeof(listint_t));

	node1->n = 10;
	node2->n = 20;
	node3->n = 30;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	size_t count = print_listint(node1);
	printf("Number of nodes: %lu\n", count);

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
