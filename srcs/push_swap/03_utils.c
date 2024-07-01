#include <push_swap.h>

void	ft_free(t_stack *stack)
{
	t_stack_node *node;

	node = NULL;
	while (stack->head)
	{
		node = stack->head->next;
		free(stack->head);
		stack->head = node;
	}
}