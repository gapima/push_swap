#include <push_swap.h>

void	ft_rb(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->B), &list->B);
}