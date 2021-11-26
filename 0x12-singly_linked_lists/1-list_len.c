#include "lists.h"
#include <stdio.h>

/**
 * list_len -   elements of linked list_t list.
 * @h: linked list
 * 
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
		size_t x_element = 0;
			const list_t *current = h;

		     while (current != NULL)
			{
									current = current->next;
									x_element++;
									}
	return (x_element);
}
