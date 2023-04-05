#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: double pointer to the beginning of the list
 * @n: integer to add to the list
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add_to;
listint_t *new_num;

if (head == NULL)
return (NULL);
add_to = malloc(sizeof(listint_t));
if (add_to == NULL)
return (NULL);
add_to->n = n;
add_to->next = NULL;
if (*head == NULL)
{
*head = add_to;
return (add_to);
}
new_num = *head;
while (new_num->next != NULL)
{
new_num = new_num->next;
}
new_num->next = add_to;
return (add_to);
}