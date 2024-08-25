/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:03:50 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 17:04:33 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack_node	*ft_stack_init_node(int content)
{
	t_stack_node	*node;

	node = ft_calloc(sizeof(t_stack_node), 1);
	if (node)
		node->content = content;
	return (node);
}

void	ft_node_add_back(t_stack_node *node, t_stack *stack)
{
	t_stack_node	*stack_node;

	stack_node = ft_get_node(stack, stack->size - 1);
	if (stack_node)
		stack_node->next = node;
	else
		stack->head = node;
	stack->size++;
}

void	ft_node_add_front(t_stack_node *node, t_stack *stack)
{
	if (!stack->head)
		stack->head = node;
	else
	{
		node->next = stack->head;
		stack->head = node;
	}
	stack->size++;
}

t_stack_node	*ft_node_pop_front(t_stack *stack)
{
	t_stack_node	*node;

	if (!(stack->size > 0))
		return (NULL);
	node = stack->head;
	stack->head = stack->head->next;
	stack->size--;
	node->next = NULL;
	return (node);
}

t_stack_node	*ft_node_pop_back(t_stack *stack)
{
	t_stack_node	*node;
	t_stack_node	*del_node;

	if (!(stack->size > 0))
		return (NULL);
	node = ft_get_node(stack, stack->size - 1);
	del_node = ft_get_node(stack, stack->size - 2);
	if (del_node)
		del_node->next = NULL;
	node->next = NULL;
	stack->size--;
	return (node);
}
