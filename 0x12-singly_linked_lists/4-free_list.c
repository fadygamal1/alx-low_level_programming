#include <stdlib.h>
#include "list.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t*tmp;

	while (head)
	{
		temp = head->next;
		free(head->tr);
		free(head);
		head = tmp;
	}
}
