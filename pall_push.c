#include "monty.h"

/**
 * h_pall - prints the values in the stack
 * @head: pointer to stack head
 * @counter: number where pall is called
 *
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void) counter;

	temp = *head;

	if (temp == NULL)
		return;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

/**
 * f_push - add node to the stack
 * @head: pointer to head stack
 * @counter: line number where push is called
 *
 */

void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, n);
	else
		addqueue(head, n);
}
