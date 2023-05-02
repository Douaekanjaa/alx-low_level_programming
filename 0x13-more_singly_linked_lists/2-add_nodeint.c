#include "lists.h"

/**
  * add_nodeint - Add a new Node to the beginning of listint_t.
  * @head: a pointer to a pointer of listint_t
  * @n: The Value to store in the new node
  * Return the adresse of the new element or NULL if it fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nv_n;

	nv_n = malloc(sizeof(listint_t));

	if (nv_n == NULL)
		return NULL;

	nv_n->n = n;
	nv_n->next = *head;

	*head = nv_n;

	return (nv_n);
}

