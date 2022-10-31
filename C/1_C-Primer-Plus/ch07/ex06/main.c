#include <stdio.h>
#define STOP	'#'

int	main(void)
{
	char	ch;
	char	prev = ' ';
	size_t	count = 0;

	printf("Enter input (%c to stop):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (prev == 'e' && ch == 'i')
			count++;
		prev = ch;
	}
	printf("Number of times \"ei\" appears: %zd\n", count);
	return (0);
}
