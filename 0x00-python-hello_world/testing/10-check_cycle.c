#include "lists.h"
#include <stdio.h>


int check_cycle(listint_t *list)
{
	listint_t *compare, *last;
	int i;

	for (i = 0; list->next != NULL ; i++)
	{
		last = list;
		list = list->next;
		if (last->next == compare)
			return (1);
		compare == last->next->next;
	}
	return (0);
	


}
