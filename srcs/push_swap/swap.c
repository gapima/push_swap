/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:06:09 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 16:59:04 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sa(t_push_swap *list)
{
	t_stack_node	*node1;
	t_stack_node	*node2;

	node1 = NULL;
	node2 = NULL;
	if (list->a.size < 2)
		return ;
	node1 = ft_node_pop_front(&list->a);
	node2 = ft_node_pop_front(&list->a);
	ft_node_add_front(node1, &list->a);
	ft_node_add_front(node2, &list->a);
	printf("sa\n");
}

void	ft_sb(t_push_swap *list)
{
	t_stack_node	*node1;
	t_stack_node	*node2;

	node1 = NULL;
	node2 = NULL;
	if (list->a.size < 2)
		return ;
	node1 = ft_node_pop_front(&list->b);
	node2 = ft_node_pop_front(&list->b);
	ft_node_add_front(node1, &list->b);
	ft_node_add_front(node2, &list->b);
	printf("sb\n");
}

void	ft_ss(t_push_swap *list)
{
	ft_sa(list);
	ft_sb(list);
	printf("ss\n");
}
