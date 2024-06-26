#include <push_swap.h>

t_stack_node	*ft_get_node(t_stack *stack, int pos)
{
	int				i;
	t_stack_node	*head;

	i = 0;
	head = stack->head;
	
	while (head)
	{
		if (i == pos)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}