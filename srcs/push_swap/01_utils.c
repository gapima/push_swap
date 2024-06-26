#include <push_swap.h>

int	ft_valid_args(char **args, t_stack *stack, int argc)
{
	int	x;
	int	y;
	int	n;

	x = 0;
	y = 1;
	if (argc == 2)
		while (args[1][x])
		{
			if (ft_isdigit(args[1][x]) != 2048 && args[1][x] != 32 && args[1][x] != '-')
				return (1);
			if (ft_atoi(&args[1][x]) > INT_MAX || ft_atoi(&args[1][x]) < INT_MIN)
				return (1);
			x++;

		}
	x = 0;
	if (argc > 2)
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
	return (0);
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