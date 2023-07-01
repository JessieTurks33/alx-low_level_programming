#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the data of a linked list.
 * @w: pointer to the list_w list to print.
 *
 * Return: The number of nodes printed out
 */
size_t print_list(const list_w *w)
{
    size_t node_count = 0;

    while (w)
    {
        if (!w->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", w->len, w->str);

        w = w->next;
        node_count++;
    }

    return node_count;
}
