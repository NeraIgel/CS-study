#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ch;

	while ((ch = getchar()) != EOF)
	{
		if (isprint(ch))
			printf("\'%c\': %d", ch, ch);
		else if (ch == '\n')
			printf("\'\\n\': %d", ch);
		else if (ch == '\t')
			printf("\'\\t\': %d", ch);
		else
			printf("\'^%c\': %d", ch + 64, ch);
		printf("    ");
	}
	printf("\n");
	return (0);
}
