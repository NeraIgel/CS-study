#include <stdio.h>
#define STOP	'#'

int	main(void)
{
	char	ch;
	size_t	count = 0;

	printf("Enter input (%c to stop):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		switch (ch)
		{
			case '.':
				printf("!");
				count++;
				break;

			case '!':
				printf("!!");
				count++;
				break;

			default:
				printf("%c", ch);
				break;
		}
	}
	printf("\nNumber of characters replaced: %zd\n", count);
	return (0);
}
