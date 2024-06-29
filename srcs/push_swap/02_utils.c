#include <push_swap.h>

int	ft_stack_isduplicate(t_stack_node *stack, int n)
{
	while (stack)
	{
		if(stack->content == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	ft_valid_notduplicate_string(t_stack *stack, char **args, int x, int y)
{
	while (args[y])
	{
		while (args[y][x])
		{
			while (ft_isdigit(args[y][x]) != 2048 && args[y][x] != '-')
				x++;
			if (ft_stack_isduplicate(stack->head, ft_atoi(&args[y][x])) == 1)
				return (1);
			ft_node_add_back(ft_stack_init_node(ft_atoi(&args[y][x])), stack);
			while (ft_isdigit(args[y][x]) == 2048 || args[y][x] == '-')
				x++;
		}
		y++;
	}
	return (0);
}

int	ft_valid_notduplicate_notstring(t_stack *stack, char **args, int y)
{
	while (args[y])
	{
		if (ft_stack_isduplicate(stack->head, ft_atoi(args[y])) == 1)
			return (1);
		ft_node_add_back(ft_stack_init_node(ft_atoi(args[y])), stack);
		y++;
	}
	return (0);
}

int	ft_valid_args(char **args, t_stack *stack, int argc)
{
	if (argc == 2)
	{
		if (ft_isdigit_arg(argc, 0, args) == 1)
			return (1);
		if (ft_valid_notduplicate_string(stack, args, 0, 1) == 1)
			return (1);
	}
	if (argc > 2)
	{
		if (ft_isdigit_args(argc, 0, 1, args) == 1)
			return (1);
		if (ft_valid_notduplicate_notstring(stack, args, 1) == 1)
			return (1);
	}
	return (0);
}