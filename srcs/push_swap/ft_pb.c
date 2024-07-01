#include <push_swap.h>

void	ft_pb(t_push_swap *list)
{
	t_stack_node *node;

	node = NULL;
	if (!list->A.size)
		return ;
	node = ft_node_pop_front(&list->A);
	ft_node_add_front(node, &list->B);
}