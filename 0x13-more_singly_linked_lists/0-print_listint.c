#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    const listint_t *current = h;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }

    return count;
}

int main(void)
{
    /* Create the linked list */
    listint_t node1, node2, node3;
    node1.n = 10;
    node1.next = &node2;
    node2.n = 20;
    node2.next = &node3;
    node3.n = 30;
    node3.next = NULL;

    /* Call the print_listint function */
    size_t count = print_listint(&node1);
    printf("Number of nodes: %zu\n", count);

    return 0;
}
