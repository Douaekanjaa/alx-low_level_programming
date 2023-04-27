#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
  * add_node - adds a new node to the beginning of linked list
  * @str: string to add
  * @head: pointer
  * Return: adress of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int l = 0;
	list_t *nv;

	while (str[l])
	{
		l++;
	}
	nv = malloc(sizeof(list_t));
	if (!nv)
		return (NULL);

	nv->str = strdup(str);
	nv->len = l;
	nv->next = (*head);
	(*head) = nv;

	return (*head);
}

