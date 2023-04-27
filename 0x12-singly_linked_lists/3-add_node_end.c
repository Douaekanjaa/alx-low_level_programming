#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds a new node at the end of linked list
  * @str: string
  * @head: pointer
  * Return: adress of the new element or NULL if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nv;
	unsigned int l = 0;
	list_t *tp = *head;

	while (str[l])
		l++;

	nv = malloc(sizeof(list_t));
	if (!nv)
	{
		return (NULL);
	}

	nv->str = strdup(str);
	nv->len = l;
	nv->next = NULL;

	if (*head == NULL)
	{
		*head = nv;
		return (nv);
	}

	while (tp->next)
		tp = tp->next;
	tp->next = nv;

	return (nv);
}

