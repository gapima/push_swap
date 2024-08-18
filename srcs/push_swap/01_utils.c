/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:05 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:05:06 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_isdigit_args(int argc, int x, int y, char **args)
{
	int	isvoid;

	isvoid = 1;	
	if (argc > 2)
	{
		while (args[y])
		{
			x = 0;
			while (args[y][x])
			{
				if (ft_isdigit(args[y][x]) != 2048)
					return (1);
				x++;
			}
			y++;
		}
		isvoid = 0;
	}
	return (isvoid);
}

int	ft_isdigit_arg(int argc, int x, char **args)
{
	int	isvoid;

	isvoid = 1;	
	if (argc == 2)
		while (args[1][x])
		{
			if (ft_isdigit(args[1][x]) != 2048 && args[1][x] != 32)
			{
				if (args[1][x] != '-')
					return (1);
				else
					if (ft_isdigit(args[1][x - 1]) == 2048)
						return (1);
			}
			if (ft_atoi(&args[1][x]) > INT_MAX || ft_atoi(&args[1][x]) < INT_MIN)
				return (1);
			if (ft_isdigit(args[1][x]) == 2048)
				isvoid = 0;
			x++;
		}
	return (isvoid);
}

t_stack_node	*ft_get_node(t_stack *stack, int pos)
{
	int				i;
	t_stack_node	*head;

	i = 0;
	head = stack->head;
	
	while (head)
	{
		if (i == pos)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
