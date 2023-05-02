#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Print all elements of a listint_t list
  * @h: pointer to listint_t
  * Return: Number of Nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
