#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ft_stack.h"

void	ft_stack_create(t_stack *s)
{
	s->head = malloc(sizeof(__t_node));
	if (!(s->head))
		ft_stack_error(s, "stack allocation error");
	__lstinit(s->head);
	s->size = 0U;
}

void	ft_stack_destroy(t_stack *s)
{
	if (s->head)
	{
		ft_stack_clear(s);
		free(s->head);
		s->head = NULL;
	}
}

void	ft_stack_clear(t_stack *s)
{
	while (!ft_stack_empty(s))
		ft_stack_pop(s);
}

void	ft_stack_error(t_stack *s, const char *errormsg)
{
	if (errormsg)
		write(STDERR_FILENO, errormsg, strlen(errormsg));
	ft_stack_destroy(s);
	exit(EXIT_FAILURE);
}

size_t	ft_stack_size(const t_stack *s)
{
	return (s->size);
}

bool	ft_stack_empty(const t_stack *s)
{
	return (s->size == 0U);
}

void	ft_stack_push(t_stack *s, void *content, size_t n)
{
	__t_node	*new;

	if (!content || !n)
		ft_stack_error(s, "stack content error");
	new = __lstnew(NULL);
	if (!new)
		ft_stack_error(s, "stack allocation error");
	new->content = malloc(n);
	if (!(new->content))
	{
		free(new);
		ft_stack_error(s, "stack allocation error");
	}
	memcpy(new->content, content, n);
	__lstadd_back(s->head, new);
	s->size++;
}

static void	__content_del(void *content)
{
	free(content);
}

void	ft_stack_pop(t_stack *s)
{
	__t_node	*node;

	if (ft_stack_empty(s))
		ft_stack_error(s, "stack empty");
	node = __lstlast(s->head);
	__lstdelone(node, __content_del);
	s->size--;
}

void	*ft_stack_top(t_stack *s)
{
	__t_node	*node;

	if (ft_stack_empty(s))
		ft_stack_error(s, "stack empty");
	node = __lstlast(s->head);
	return (node->content);
}
