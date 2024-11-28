/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:41:55 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/23 11:46:56 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char s[5] = {30, 2, 3};

// 	int c = 3;

// 	size_t n = 3;

// 	printf("LB %p\n", (char *)memchr(s,c, n));
// 	printf("FT %p\n", (char *)ft_memchr(s,c, n));
// 	//value at index
// 	printf("LB value %ld\n", *(char *)memchr(s,c, n));
// 	printf("FT value %ld\n", *(char *)ft_memchr(s,c, n));
// 	/* To determine the index (or offset) where the byte was found, 
// 	we subtract the base address of the array s from the result pointer.*/
// 	printf("LB index %ld\n", ((char *)memchr(s,c, n)) - s);
// 	printf("FT index %ld\n", ((char *)ft_memchr(s,c, n)) - s);
// 							//0x7ffff77c54dd - 0x7ffff77c54db
// 	printf("Address s %p\n", s);

// }

/*memchr is typically used when you need to search arbitrary memory blocks, 
such as arrays of bytes, structures, or raw buffers 
that might not necessarily be null-terminated.
strchr is used when dealing with C-style strings, 
where you're interested in finding characters 
within a null-terminated sequence of characters.*/

/*The format specifier %s is used to print null-terminated strings, 
but memchr and ft_memchr return a pointer to 
a specific byte in memory (which is not a string). 
If memchr or ft_memchr finds the byte, it returns a pointer to that byte,
 which is not a null-terminated string.*/

/*%c is used to print a character. 
It would interpret an integer value (like an index) as a character, 
which could result in printing an unexpected or meaningless character 
(based on the ASCII value of that integer).
In contrast, %ld is used for printing integers, 
which is exactly what you need when printing the index of the byte.*/