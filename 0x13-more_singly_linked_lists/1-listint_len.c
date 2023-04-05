#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
size_t co_num = 0;

while (h != NULL)
{
co_num++;
h = h->next;
}
return (co_num);
}
