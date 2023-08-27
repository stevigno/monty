#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction in the file.
 * @n: Value to push onto the stack.
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *n_push;

	n_push = malloc(sizeof(stack_t));
	if (n_push == NULL)
	{
		fprintf(stderr, "L%d:Error: malloc failed\n", line_number);
		exit(EXIT_FAILURE);
	}

	n_push->n = n;
	n_push->prev = NULL;
	n_push->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = n_push;

	*stack = n_push;
}

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number of the instruction in the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *nw_pall = *stack;

	(void)line_number;

	while (nw_pall != NULL)
	{
		printf("%d\n", nw_pall->n);
		nw_pall = nw_pall->next;
	}
}

