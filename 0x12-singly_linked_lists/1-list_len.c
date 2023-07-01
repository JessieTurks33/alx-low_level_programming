#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of data elements in a linked list.
 * @w: pointer to the list_t list
 *
 * Return: number of data elements in w
 */
size_t list_len(const list_t *w)
{
    size_t data_count = 0;

    while (w)
    {
        data_count++;
        w = w->next;
    }

    return data_count;
}

