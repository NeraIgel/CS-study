#include <stdio.h>
#define SIZE	255

int	main(void)
{
	char	line[SIZE];
	size_t	len;
	size_t	i;

	printf("Enter a line to reverse:\n");
	len = 0;
	do
		scanf("%c", &line[len]);
	while (line[len++] != '\n');
	for (i = len - 1; i-- > 0; )
		printf("%c", line[i]);
	printf("\n");
	return (0);
}
