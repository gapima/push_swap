
#include <push_swap.h>


static void	ft_stack_print(t_stack *stack)
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

	if (argc == 1)
		return (0);
	ft_bzero(&push, sizeof(t_push_swap));
	ft_node_add_front(ft_stack_init_node(3), &push.A);
	ft_node_add_front(ft_stack_init_node(10), &push.A);
	ft_node_add_front(ft_stack_init_node(8), &push.A);
	t_stack_node *node = ft_node_pop_back(&push.A);
	//ft_node_add_back(ft_stack_init_node(10), &push.A);
	// ft_node_add_back(ft_stack_init_node(5), &push.A);
	// ft_node_add_back(ft_stack_init_node(3), &push.A);
	printf("%d\n", node->content);
	ft_stack_print(&push.A);
	return (0);
}
