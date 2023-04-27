#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a linked list
  * @head: list to be frred
  * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}

