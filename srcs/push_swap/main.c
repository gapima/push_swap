
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
	ft_node_add_front(ft_stack_init_node(3), &push.A);
	ft_stack_print(&push.A);
	ft_free(&push.A);
	return (0);
}
