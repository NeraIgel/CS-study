#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[40];
	size_t	len;
	size_t	i;

	printf("Enter a string: ");
	scanf("%s", str);
	len = strlen(str);
	i = len;
	while (i-- > 0)
		printf("%c", str[i]);
	printf("\n");
	return (0);
}
