#include "libft.h"

int main()
{
	char s[5] = "Hello";

	s[3] = 'g';

	char *ptr = &s[3];

	printf("%s\n", s);
	printf("%s\n", s[3]);
	printf("%c\n", s[3]);
	printf("%c", *ptr);
}