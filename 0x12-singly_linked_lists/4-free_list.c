#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the list_t list
 * @head: A pointer list_t list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

