#include <stdio.h>
#include <limits.h>

int	main(void)
{
	float		download_speed_Mbs;
	float		file_size_MB;

	printf("Enter the download spped (in Mbs): ");
	scanf("%f", &download_speed_Mbs);
	printf("Enter the file size (in MB): ");
	scanf("%f", &file_size_MB);
	printf("At %.2f megabits per secnod, a file of %.2f megabytes"
			" downloads in %.2f seconds.\n", download_speed_Mbs, file_size_MB, file_size_MB / download_speed_Mbs * CHAR_BIT);
	return (0);
}
