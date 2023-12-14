#include "monty.h"

/**
 * pall - pushes an element to the stack
 * @stack: stack given by main
 * @line_cnt: counter for line number of the file 
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
