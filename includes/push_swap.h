/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glima <glima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:04:49 by glima             #+#    #+#             */
/*   Updated: 2024/08/25 19:43:23 by glima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>
# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_stack_node
{
	int						content;
	struct s_stack_node		*next;
}							t_stack_node;

typedef struct s_stack
{
	int				size;
	int				max;
	int				min;
	t_stack_node	*head;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	a;
	t_stack	b;
}				t_push_swap;

t_stack_node	*ft_get_node(t_stack *stack, int pos);
t_stack_node	*ft_node_pop_front(t_stack *stack);
t_stack_node	*ft_node_pop_back(t_stack *stack);
t_stack_node	*ft_stack_init_node(int content);

void			ft_node_add_back(t_stack_node *node, t_stack *stack);
void			ft_node_add_front(t_stack_node *node, t_stack *stack);
void			ft_free(t_stack *stack);
void			ft_sa(t_push_swap *list);
void			ft_sb(t_push_swap *list);
void			ft_ss(t_push_swap *list);
void			ft_pa(t_push_swap *list);
void			ft_pb(t_push_swap *list);
void			ft_ra(t_push_swap *list);
void			ft_rb(t_push_swap *list);
void			ft_rr(t_push_swap *list);
void			ft_rra(t_push_swap *list);
void			ft_rrb(t_push_swap *list);
void			ft_rrr(t_push_swap *list);
void			ft_exc_rotate(t_push_swap *push, int value);
void			ft_sort(t_push_swap *push_swap);

int				ft_valid_args(char **args, t_stack *stack, int argc);
int				ft_valid_notduplicate_string(t_stack *stack, \
				char **args, int x, int y);
int				ft_valid_notduplicate_notstring(t_stack *stack, \
				char **args, int y);
int				ft_stack_isduplicate(t_stack_node *stack, int n);
int				ft_isdigit_args(int argc, int x, int y, char **args);
int				ft_isdigit_arg(int argc, int x, char **args);
int				ft_value_rotate(t_stack *stack, int pos);
int				ft_value_rotate(t_stack *stack, int pos);
int				ft_return_value(int value, t_stack *stack);
int				ft_abs(int value);

#endif
