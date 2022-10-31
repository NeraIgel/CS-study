#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		n;
	size_t	i;

	printf("Enter an integer: ");
	scanf("%d", &n);
	i = 0;
	while (i <= 10)
	{
		printf("%d\n", n);
		if (n++ == INT_MAX)
			break ;
		i++;
	}
	return (0);
}
