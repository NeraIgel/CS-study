#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	name[40];
	size_t	len;

	printf("Enter your name: ");
	scanf("%s", name);
	len = strlen(name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", (int)len + 3, name);
	return (0);
}
