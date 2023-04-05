#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list in the code.
 * @h: list to print
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
size_t cou_num = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
cou_num++;
}
return (cou_num);
}
