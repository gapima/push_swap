
#include <push_swap.h>

int	main(int argc, char **argv)
{

	t_push_swap	push;

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
