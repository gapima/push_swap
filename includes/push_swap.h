
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>

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

int				ft_valid_args(char **args, t_stack *stack, int argc);
int				ft_valid_notduplicate_string(t_stack *stack, char **args, int x, int y);
int				ft_valid_notduplicate_notstring(t_stack *stack, char **args, int y);	
int				ft_stack_isduplicate(t_stack_node *stack, int n);
int				ft_isdigit_args(int argc, int x, int y, char **args);
int				ft_isdigit_arg(int argc, int x, char **args);


#endif