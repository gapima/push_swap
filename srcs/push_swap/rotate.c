#include <push_swap.h>

void	ft_ra(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->A), &list->A);
}

void	ft_rb(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->B), &list->B);
}

void	ft_rr(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->A), &list->A);
	ft_node_add_back(ft_node_pop_front(&list->B), &list->B);
}