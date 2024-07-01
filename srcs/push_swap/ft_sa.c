#include <push_swap.h>

void	ft_sa(t_push_swap *list)
{
	t_stack_node *node1;
	t_stack_node *node2;

	node1 = NULL;
	node2 = NULL;
	if (list->A.size < 2)
		return ;
	node1 = ft_node_pop_front(&list->A);
	node2 = ft_node_pop_front(&list->A);
	ft_node_add_front(node1, &list->A);
	ft_node_add_front(node2, &list->A);
}