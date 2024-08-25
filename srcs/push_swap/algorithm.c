/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:01:43 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 20:04:50 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_value_rotate(t_stack *stack, int pos)
{
	if (pos > stack->size / 2)
		return (pos - stack->size);
	return (pos);
}

int	ft_return_value(int value, t_stack *stack)
{
	int				pos;
	t_stack_node	*head;

	pos = 0;
	head = stack->head;
	while (head)
	{
		if (head->content == value)
			break ;
		head = head->next;
		pos++;
	}
	return (pos);
}

int	ft_abs(int value)
{
	if (value < 0)
		return (value * -1);
	return (value);
}

void	ft_exc_rotate(t_push_swap *push, int value)
{
	int	pos;
	int	a;
	int	direction;
	int	value_absolut;

	pos = ft_return_value(value, &push->a);
	a = ft_value_rotate(&push->a, pos);
	value_absolut = ft_abs(a);
	direction = a > 0;
	while (value_absolut-- > 0)
	{
		if (direction)
			ft_ra(push);
		else
			ft_rra(push);
	}
}

void	ft_swap_corret(t_stack *stack, int value)
{
	//  1 2 3  - 9 8 7 6 5 4 10 11 12
	t_stack_node *head_a;
	t_stack_node *head_b;

	head_a = stack->head;
	head_b =
	while (head)
	{
		
	}
}
