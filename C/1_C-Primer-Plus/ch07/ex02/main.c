#include <stdio.h>
#include <ctype.h>
#define STOP	'#'

int	main(void)
{
	char	ch;
	size_t	count = 0;

	printf("Enter input (%c to stop):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (!isspace(ch) && isprint(ch))
		{
			printf("%c,%d\t", ch, ch);
			if (++count % 8 == 0)
				printf("\n");
		}
	}
	printf("\n");
	return (0);
}
