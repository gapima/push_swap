/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:06:06 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:06:07 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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