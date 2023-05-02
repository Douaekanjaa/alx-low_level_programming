#include "lists.h"

/**
  * listint_len - the number of elments in a linked listint_t list.
  * @h: pointer to listint_t
  * Return: The Number of elemnets in Linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}

