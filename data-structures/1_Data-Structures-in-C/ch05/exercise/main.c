#include <stdio.h>
#include <stdlib.h>
#include "ft_stack.h"

static bool	__check_matching_pair(char lhs, char rhs)
{
	if (lhs == '(' && rhs == ')')	return (true);
	if (lhs == '[' && rhs == ']')	return (true);
	if (lhs == '{' && rhs == '}')	return (true);
	return (false);
}

static bool	check_matching(t_stack *s, const char *expr)
{
	int		ch;

	ch = 0;
	while (*expr && ch >= 0)
	{
		switch (*expr)
		{
			case '(': case '[': case '{':
				ft_stack_push(s, expr, sizeof(char));
				break ;
			case ')': case ']': case '}':
				if (ft_stack_empty(s))
					ch = -1;
				else
				{
					ch = *((char *)ft_stack_top(s));
					if (__check_matching_pair(ch, *expr))
						ft_stack_pop(s);
					else
						ch = -1;
				}
				break ;
		}
		++expr;
	}
	return (*expr == '\0' && ft_stack_empty(s));
}

static int	__calculate_expression(char operator, int op1, int op2)
{
	if (operator == '+')	return (op1 + op2);
	if (operator == '-')	return (op1 - op2);
	if (operator == '*')	return (op1 * op2);
	if (operator == '/')	return (op1 / op2);
	return (0);
}

static int	calculate_postfix_expression(t_stack *s, const char *expr)
{
	int		op1;
	int		op2;
	int		value;

	while (*expr)
	{
		switch (*expr)
		{
			case '+': case '-': case '*': case '/':
				op2 = *((int *)ft_stack_top(s));	ft_stack_pop(s);
				op1 = *((int *)ft_stack_top(s));	ft_stack_pop(s);
				value = __calculate_expression(*expr, op1, op2);
				ft_stack_push(s, &value, sizeof(int));
				break ;
			default:
				value = *expr - '0';
				ft_stack_push(s, &value, sizeof(int));
				break ;
		}
		++expr;
	}
	return (*(int *)ft_stack_top(s));
}

int	main(void)
{
	t_stack	s;

	ft_stack_create(&s);
	ft_stack_push(&s, "a", 2);	printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_push(&s, "b", 2);	printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_pop(&s);			printf("%zd / %s\n", ft_stack_size(&s), (char *)ft_stack_top(&s));
	ft_stack_pop(&s);			printf("%zd\n", ft_stack_size(&s));

	printf("\n");
	ft_stack_clear(&s);		printf("matching %s\n", check_matching(&s, "") ? "success" : "fail");
	ft_stack_clear(&s);		printf("matching %s\n", check_matching(&s, "{ A[(i+1)]=0; }") ? "success" : "fail");
	ft_stack_clear(&s);		printf("matching %s\n", check_matching(&s, "{ A[(i+1)]=0; ]") ? "success" : "fail");
	ft_stack_clear(&s);		printf("matching %s\n", check_matching(&s, "{ A[(i+1)]=0; ") ? "success" : "fail");

	printf("\n");
	ft_stack_clear(&s);		printf("result = %d\n", calculate_postfix_expression(&s, "82/3-32*+"));
	ft_stack_clear(&s);		printf("result = %d\n", calculate_postfix_expression(&s, "234*+"));
	ft_stack_clear(&s);		printf("result = %d\n", calculate_postfix_expression(&s, "12+7*"));

	ft_stack_destroy(&s);
	//system("leaks a.out");
	return (EXIT_SUCCESS);
}
