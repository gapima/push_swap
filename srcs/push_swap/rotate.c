#include <push_swap.h>

void	ft_ra(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->A), &list->A);
	printf("ra\n");
}

void	ft_rb(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->B), &list->B);
	printf("rb\n");
}

void	ft_rr(t_push_swap *list)
{
	ft_node_add_back(ft_node_pop_front(&list->A), &list->A);
	ft_node_add_back(ft_node_pop_front(&list->B), &list->B);
	printf("rr\n");
}