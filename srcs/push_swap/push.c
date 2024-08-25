/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:58 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 19:22:59 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_pa(t_push_swap *list)
{
	t_stack_node	*node;

	node = NULL;
	if (!list->b.size)
		return ;
	node = ft_node_pop_front(&list->b);
	ft_node_add_front(node, &list->a);
	printf("pa\n");
}

void	ft_pb(t_push_swap *list)
{
	t_stack_node	*node;

	node = NULL;
	if (!list->a.size)
		return ;
	node = ft_node_pop_front(&list->a);
	ft_node_add_front(node, &list->b);
	printf("pb\n");
}
