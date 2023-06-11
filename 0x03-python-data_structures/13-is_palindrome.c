#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/*RAYANE - MAD*/

/**
 * is_palindrome - find out if list is a palindrome
 * @head: first node of the list
 * Return: 1 if yes and 0 if not
*/

int is_palindrome(listint_t **head)
{
	int i;
	listint_t *current = *head;
	listint_t *first_node = *head;

	for (i = 0; current->next != NULL ; i++)
	{
		if (current->next == first_node)
			return (1);
		current = current->next;
	}
	return (0);
}
