#include "monty.h"

/**
* free_stack - frees a stack
* @head: head
*
* Return: void
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* f_stack - function that prints the to stack
* @head: head stack
* @counter: count
*
* Return: void
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
