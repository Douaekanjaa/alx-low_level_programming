#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
  * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
  * @next: points to the next node
  * @len: legth of a string
  * Description: singly linked list structure
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
