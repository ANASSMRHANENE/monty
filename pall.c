#include "monty.h"
/**
 * f_pall - function
 * @head: head
 * @counter: variable
 * Return: void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
