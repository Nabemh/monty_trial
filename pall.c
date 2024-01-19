#include "monty.h"

/**
 * h_pall - prints the values in the stack
 * @head: pointer to stack head
 * @counter: number where pall is called
 *
 */

void h_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void) counter;
	(void) stack;

	temp = *head;

	if (temp == NULL)
		return;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
