#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of listint_t list.
  * @h: pointer to the struct type list.
  *
  * Return: number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
