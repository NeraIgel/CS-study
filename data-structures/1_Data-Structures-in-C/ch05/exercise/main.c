#include <stdio.h>
#include <stdlib.h>
#include "ft_stack.h"

int	main(void)
{
	t_stack	s;

	ft_stack_create(&s);
	ft_stack_push(&s, "a", 2);	printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_push(&s, "b", 2);	printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_pop(&s);			printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_pop(&s);			printf("%zd\n", ft_stack_size(&s));
	ft_stack_destroy(&s);
	//system("leaks a.out");
	return (EXIT_SUCCESS);
}
