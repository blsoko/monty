#include "monty.h"
/**
 * pop - remove top value
 * @stack: stack_structure
 * @line_number: number of line
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	next = (*stack)->next;
	free(*stack);
	*stack = next;
}