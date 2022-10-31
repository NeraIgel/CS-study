#include <stdio.h>

int	main(void)
{
	size_t	count = 0;

	while (getchar() != EOF)
		count++;
	printf("Character count: %zd\n", count);
	return (0);
}
