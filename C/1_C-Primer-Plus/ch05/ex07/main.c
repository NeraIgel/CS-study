#include <stdio.h>

float	ft_get_cubed(float f)
{
	return (f * f * f);
}

int	main(void)
{
	float	f;

	printf("Enter a number to cube: ");
	scanf("%f", &f);
	printf("%.1f cubed is %.1f\n", f, ft_get_cubed(f));
	return (0);
}
