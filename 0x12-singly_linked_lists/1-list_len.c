#include <stdio.h>
#include "lists.h"

/**
* list_len -  a function that returns the number of elements hyth hyyhgff h for yhr account be the
* @h: pointer to the node  
*
* Return: number of element in h
*
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
