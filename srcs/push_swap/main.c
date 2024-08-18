/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:05:51 by glima             #+#    #+#             */
/*   Updated: 2024/08/18 18:08:36 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// static void ft_stack_print(t_stack *stack)
// {
// 	t_stack_node *head;

// 	head = stack->head;
// 	while (head)
// 	{
// 		printf("%d ", head->content);
// 		head = head->next;
// 	}
// 	printf("\n");
// }

int main(int argc, char **argv)
{
	t_push_swap push;

	ft_bzero(&push, sizeof(t_push_swap));
	if (argc == 1)
		return (0);
	if (ft_valid_args(argv, &push.A, argc) == 1)
	{
		ft_free(&push.A);
		return (1);
	}

	ft_insertion_sort(&push);
	//ft_quick_sort(&push, push.A.size, 'A');
	//ft_stack_print(&push.A);
	// ft_start_quick_sort(&push);
	//ft_stack_print(&push.B);
	ft_free(&push.A);
	ft_free(&push.B);
	return (0);
}
