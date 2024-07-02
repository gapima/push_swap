#include <push_swap.h>

void	ft_rrr(t_push_swap *list)
{
	ft_node_add_front(ft_node_pop_back(&list->A), &list->A);
	ft_node_add_front(ft_node_pop_back(&list->B), &list->B);
}