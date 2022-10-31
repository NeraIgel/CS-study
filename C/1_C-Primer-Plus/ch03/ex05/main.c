#include <stdio.h>

int	main(void)
{
	float			SECONDS_PER_YEAR = 3.156e7f;
	unsigned int	age;

	printf("What is your age (in years): ");
	scanf("%u", &age);
	printf("You are %g seconds old\n", SECONDS_PER_YEAR * age);
	return (0);
}
