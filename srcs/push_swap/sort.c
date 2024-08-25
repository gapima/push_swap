/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:53:59 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 19:30:11 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort(t_push_swap *push_swap)
{
	int	a;
	int	b;
	int	c;

	if (push_swap->a.size != 3)
		return ;
	a = ft_get_node(&push_swap->a, 0)->content;
	b = ft_get_node(&push_swap->a, 1)->content;
	c = ft_get_node(&push_swap->a, 2)->content;
	if (a > b && a > c && b > c)
	{
		ft_sa(push_swap);
		ft_rra(push_swap);
	}
	if (b > a && b > c && a > c)
		ft_rra(push_swap);
	if (c > b && c > a && a > b)
		ft_sa(push_swap);
	if (a > b && a > c && b < c)
		ft_ra(push_swap);
	if (b > a && b > c && a < c)
	{
		ft_rra(push_swap);
		ft_sa(push_swap);
	}
}
