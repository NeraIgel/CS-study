#include <stdio.h>
#include <ctype.h>

char	get_first(void)
{
	int		ch;

	while (isspace(ch = getchar()))
		;
	while (getchar() != '\n')
		;
	return (ch);
}

int	main(void)
{
	printf("return value of get_first(): %c\n", get_first());
	return (0);
}
