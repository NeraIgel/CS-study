#include <stdio.h>
#define STOP	'#'

int	main(void)
{
	char	ch;
	size_t	others = 0;
	size_t	spaces = 0;
	size_t	newlines = 0;

	printf("Enter input (%c to stop):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (ch == '\n')
			newlines++;
		else if (ch == ' ')
			spaces++;
		else
			others++;
	}
	printf("others: %zd\n"
			"spaces: %zd\n"
			"newlines: %zd\n", others, spaces, newlines);
	return (0);
}
