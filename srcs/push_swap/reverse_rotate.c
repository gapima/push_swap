/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:06:03 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 18:51:24 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_rra(t_push_swap *list)
{
	ft_node_add_front(ft_node_pop_back(&list->a), &list->a);
	printf("rra\n");
}

void	ft_rrb(t_push_swap *list)
{
	ft_node_add_front(ft_node_pop_back(&list->b), &list->b);
	printf("rrb\n");
}

void	ft_rrr(t_push_swap *list)
{
	ft_node_add_front(ft_node_pop_back(&list->a), &list->a);
	ft_node_add_front(ft_node_pop_back(&list->b), &list->b);
	printf("rrr\n");
}
