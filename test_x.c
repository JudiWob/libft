#include "libft.h"
int main ()
{

	int a = 10;        // 'a' is an integer variable
	int *p = &a;       // 'p' is a pointer to 'a', storing the memory address of 'a'

	printf("%d", *p);  // Dereferencing 'p' gives the value of 'a', which is 10
}

