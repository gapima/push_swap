#include <push_swap.h>

void	ft_rrb(t_push_swap *list)
{
	ft_node_add_front(ft_node_pop_back(&list->B), &list->B);
}