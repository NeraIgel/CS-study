#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ch;
	size_t	uppercase = 0;
	size_t	lowercase = 0;
	size_t	other = 0;

	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			uppercase++;
		else if (islower(ch))
			lowercase++;
		else
			other++;
	}
	printf("Uppercase letters: %zd\n", uppercase);
	printf("Lowercase letters: %zd\n", lowercase);
	return (0);
}
