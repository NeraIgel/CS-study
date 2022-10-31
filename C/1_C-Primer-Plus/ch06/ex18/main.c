#include <stdio.h>
#define DUNBARS_NUMBER	150

int	main(void)
{
	size_t	friends;
	size_t	weeks;

	weeks = 0;
	friends = 5;
	while (friends < DUNBARS_NUMBER)
	{
		weeks++;
		friends -= weeks;
		friends *= 2;
		printf("%zdweeks / %zd friends\n", weeks, friends);
	}
	return (0);
}
