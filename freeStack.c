#include "monty.h"

/**
* free_stack - function
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
* f_stack - function that prints the top
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
