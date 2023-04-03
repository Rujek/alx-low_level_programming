#include "lists.h"
#include <stdio.>
#include <string.h>
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of all the date in a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->;
		head = head->next;
	}
	return (sum);
}
