#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add_to;

if (head == NULL)
return (NULL);
add_to = malloc(sizeof(listint_t));
if (add_to == NULL)
return (NULL);
add_to->n = n;
add_to->next = *head;
*head = add_to;
return (add_to);
}
