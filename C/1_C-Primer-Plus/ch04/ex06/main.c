#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	firstname[40];
	char	lastname[40];
	size_t	first_len;
	size_t	last_len;

	printf("What your first and last name: ");
	scanf("%s %s", firstname, lastname);
	first_len = strlen(firstname);
	last_len = strlen(lastname);
	printf("%s %s\n", lastname, firstname);
	printf("%*zd %*zd\n", (int)last_len, last_len, (int)first_len, first_len);
	printf("%s %s\n", lastname, firstname);
	printf("%-*zd %-*zd\n", (int)last_len, last_len, (int)first_len, first_len);
	return (0);
}
