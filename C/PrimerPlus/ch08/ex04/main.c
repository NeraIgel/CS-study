#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int	main(void)
{
	int		ch;
	bool	in_word = false;
	size_t	word_count = 0;
	size_t	letter_count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (!isspace(ch) && !ispunct(ch))
		{
			letter_count++;
			if (!in_word)
			{
				word_count++;
				in_word = true;
			}
		}
		else
			in_word = false;
	}
	printf("Average letters per word: %.1f\n", (double)letter_count / word_count);
	return (0);
}
