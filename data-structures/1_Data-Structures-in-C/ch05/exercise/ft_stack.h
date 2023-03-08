#pragma once
#ifndef FT_STACK_H
# define FT_STACK_H

# include <stddef.h>
# include <stdbool.h>
# include "__list.h"

typedef struct s_stack
{
	__t_node	*head;
	size_t		size;
}	t_stack;

void	ft_stack_create(t_stack *s);
void	ft_stack_destroy(t_stack *s);
void	ft_stack_clear(t_stack *s);
void	ft_stack_error(t_stack *s, const char *errormsg);
size_t	ft_stack_size(const t_stack *s);
bool	ft_stack_empty(const t_stack *s);
void	ft_stack_push(t_stack *s, const void *content, size_t n);
void	ft_stack_pop(t_stack *s);
void	*ft_stack_top(t_stack *s);

#endif
