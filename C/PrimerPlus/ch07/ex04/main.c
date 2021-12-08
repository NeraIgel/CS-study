#include <stdio.h>
#define STOP	'#'

int	main(void)
{
	char	ch;
	size_t	count = 0;

	printf("Enter input (%c to stop):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
			printf("!");
			count++;
		}
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		else
			printf("%c", ch);
	}
	printf("\nNumber of characters replaced: %zd\n", count);
	return (0);
}
