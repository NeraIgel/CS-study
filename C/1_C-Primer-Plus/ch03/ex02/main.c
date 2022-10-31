#include <stdio.h>

int	main(void)
{
	char	c;

	printf("Enter an ASCII code: ");
	scanf("%hhd", &c);
	printf("Character for ASCII code %hhd: %c\n", c, c);
	return (0);
}
