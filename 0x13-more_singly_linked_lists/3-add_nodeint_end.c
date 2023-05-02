#include "lists.h"

/**
  * add_nodeint_end - adds a node at the end of a the linked list
  * @n: the value to store in the New Node
  * @head: a pointer to the first element in the linked list
  * Return: The adress of the new element or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv;
	listint_t *t = *head;

	nv = malloc(sizeof(listint_t));
	if (!nv)
		return (NULL);

	nv->n = n;
	nv->next = NULL;

	if (*head == NULL)
	{
		*head = nv;
		return (nv);
	}

	while (t->next)
	{
		t = t->next;
	}
	t->next = nv;

	return (nv);
}

