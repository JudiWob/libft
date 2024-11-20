#include <stdio.h>

int	main()
{
	char dest[] = "Badeland";

	int n = 4;

	char *ptr = dest + 2  + 1;
	
	printf("Dest: %s", ptr);
}