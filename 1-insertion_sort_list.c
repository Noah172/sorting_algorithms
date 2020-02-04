#include "sort.h"
/**
 *insertion_sort_list - function that sorts a doubly linked list of integers
 *                      in ascending order using the Insertion sort algorithm
 *@list: a double linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *c, *a;
	/*a is the actual position in the list | c is the current comparation value*/

	if ((*list)->next == NULL || list == NULL || *list == NULL)
		return;
	/*checking if the list is not empty*/
	c = *list;
	a = *list;
	while (a != NULL)
	{
		a = a->next;
		while (c->prev && (c->n < c->prev->n))
		{
			c->prev->next = c->next;
			if (c->next != NULL)
				c->next->prev = c->prev;

			c->next = c->prev;
			c->prev = c->next->prev;
			if (c->prev != NULL)
				c->prev->next = c;
			else
				*list = c;
			c->next->prev = c;
			print_list(*list);
		}
		c = a;
	}
}
