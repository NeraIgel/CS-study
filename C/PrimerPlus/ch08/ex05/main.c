#include <stdio.h>

int	main(void)
{
	int		ch;
	int		guess = 50;
	int		lower_bound = 0;
	int		upper_bound = 100;

	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond with a y if my guess is right, with a h if it's too high and an l if it's too low.\n");
	printf("Uh...is your number %d?\n", guess);
	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')
			;
		if (ch == 'h')
			upper_bound = guess;
		else if (ch == 'l')
			lower_bound = guess;
		else
		{
			printf("Invalid valid input. Try again.\n");
			continue ;
		}
		guess = (upper_bound + lower_bound) / 2;
		printf("Well, then, is it %d?\n", guess);
	}
	printf("I knew I could do it!\n");
	return (0);
}
