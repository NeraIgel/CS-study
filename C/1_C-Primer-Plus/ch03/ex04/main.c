#include <stdio.h>

int	main(void)
{
	float	f;

	printf("Enter a floating-point value: ");
	scanf("%f", &f);
	printf("f notation: %f\n", f);
	printf("e notation: %e\n", f);
	printf("p notation: %a\n", f);
	return (0);
}
