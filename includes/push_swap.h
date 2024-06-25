
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

 typedef struct s_stack_node
 {
	int					content;
	struct s_stack_node	*next;
 }	t_stack_node;

 typedef struct s_stack
 {
	int				size;
	t_stack_node	*head;
 } t_stack;

typedef struct s_push_swap
{
	t_stack	A;
	t_stack B;
} t_push_swap;

t_stack_node	*ft_get_node(t_stack *stack, int pos);
t_stack_node	*ft_node_pop_front(t_stack *stack);
t_stack_node	*ft_node_pop_back(t_stack *stack);
t_stack_node 	*ft_stack_init_node(int content);

void			ft_node_add_back(t_stack_node *node, t_stack *stack);
void			ft_node_add_front(t_stack_node *node, t_stack *stack);

void		ft_stack_print(t_stack *stack);


#endif