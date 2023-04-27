#include "lists.h"
#include <stdlib.h>

/**
  * list_len - Number of elements in linked list
  * @h: pointer
  * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t nomb = 0;

	while (h)
	{
		nomb++;
		h = h->next;
	}

	return (nomb);
}

