#include "lists.h"
#include <stdio.>
#include <string.h>
#include <stdlib.h>

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
