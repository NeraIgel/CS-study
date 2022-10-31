#include <stdio.h>
#define SIZE	6

int	main(void)
{
	int		i;
	int		j;
	char	ch;

	ch = 'A';
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%c", ch++);
		printf("\n");
	}
	return (0);
}
