#include <stdio.h>
#define SIZE	26

int	main(void)
{
	char	arr[SIZE];
	size_t	i;

	for (i = 0; i < SIZE; i++)
		arr[i] = 'a' + i;
	for (i = 0; i < SIZE; i++)
		printf("%c", arr[i]);
	printf("\n");
	return (0);
}
