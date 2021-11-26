#include <stdio.h>
#include "list.h"

/**
 * singly_linked_list - prints all element of linked list
 *
 * @h: print pointer list.h list
 *
 * Return: the number of nodes printed
 */
size_t print_list (const list_t *h)
{
	size_t s = 0;
	
	while (h)
	{
		if(!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", !h->len, !h->str);
		h = h->next;
		s++;
	}
return(s);
