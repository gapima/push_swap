/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:58 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:05:59 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_pa(t_push_swap *list)
{
	t_stack_node *node;

	node = NULL;
	if (!list->B.size)
		return ;
	node = ft_node_pop_front(&list->B);
	ft_node_add_front(node, &list->A);
	printf("pa\n");
}

void	ft_pb(t_push_swap *list)
{
	t_stack_node *node;

	node = NULL;
	if (!list->A.size)
		return ;
	node = ft_node_pop_front(&list->A);
	ft_node_add_front(node, &list->B);
	printf("pb\n");
}