/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:51 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 19:44:55 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static void ft_stack_print(t_stack *stack)
{
	t_stack_node *head;

	head = stack->head;
	while (head)
	{
		printf("%d ", head->content);
		head = head->next;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	t_push_swap	push;
	
	push.a.max = INT_MIN;
	push.a.min = INT_MAX;
	push.b.max = INT_MIN;
	push.b.min = INT_MAX;
	ft_bzero(&push, sizeof(t_push_swap));
	if (argc == 1)
		return (0);
	if (ft_valid_args(argv, &push.a, argc) == 1)
	{
		ft_free(&push.a);
		return (1);
	}
	//ft_exc_rotate(&push, 7);
	ft_sort(&push);
	ft_stack_print(&push.a);
	ft_free(&push.a);
	ft_free(&push.b);
	return (0);
}
