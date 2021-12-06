#include <stdio.h>

int	main(void)
{
	char	firstname[40];
	char	lastname[40];

	printf("Enter your first and last name: ");
	scanf("%s %s", firstname, lastname);
	printf("%s %s\n", lastname, firstname);
	return (0);
}
