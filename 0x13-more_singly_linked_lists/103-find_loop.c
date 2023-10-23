/*
 * File: 103-find_loop.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *here;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	here = (head->next)->next;

	while (here)
	{
		if (tortoise == here)
		{
			tortoise = head;

			while (tortoise != here)
			{
				tortoise = tortoise->next;
				here = here->next;
			}

			return(tortoise);
		}

		tortoise = tortoise->next;
		here = (here->next)->next;
	}

	return (NULL);
}
