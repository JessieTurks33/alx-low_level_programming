#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns tha number of elements in a linked list
 * @w: pointer to the list_t list
 *
 * Return: Npnumber of elements in w
 */
size_t list_len(const list_t *w)
{
	size_t count = 0;

	while (w)
	{
		count++;
		w = w->next;
	}

	return (count);
}
