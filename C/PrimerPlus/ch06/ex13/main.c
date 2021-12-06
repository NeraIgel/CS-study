#include <stdio.h>
#define SIZE	8

int	main(void)
{
	int		arr[SIZE];
	size_t	i;

	for (arr[0] = 1, i = 1; i < SIZE; i++)
		arr[i] = arr[i - 1] * 2;
	i = 0;
	do
		printf("%d\n", arr[i]);
	while (++i < SIZE);
	return (0);
}
