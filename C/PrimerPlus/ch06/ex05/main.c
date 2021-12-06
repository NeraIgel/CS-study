#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	int		size;
	char	ch;

	printf("Enter an uppercase letter (e.g A~Z): ");
	scanf("%c", &ch);
	size = ch - 'A' + 1;
	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			printf(" ");
		for (j = 0; j <= i; j++)
			printf("%c", 'A' + j);
		for (j = i - 1; j >= 0; j--)
			printf("%c", 'A' + j);
		printf("\n");
	}
	return (0);
}
