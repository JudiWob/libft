/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:56:09 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 09:38:24 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;
	size_t	n;

	dst_len = ft_strlen(dst);
	n = dst_len;
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < dst_len)
		return (ft_strlen(src) + size);
	while (src[i] && (n + i) < size - 1)
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = '\0';
	return (ft_strlen(src) + dst_len);
}

// int main()
// {
// 	char *src = " und Tschuesssss"; //13 
// 	char dst[7] = "Hallo";  //5
// 	int size = sizeof(dst);
// 	printf("Return ft: %zu\n", ft_strlcat(dst, src, size));
// 	printf("Dest ft: %s\n", dst);
// 	//Hallo und Tschuessssss

// 	char *src1 = " und Tschuesssss"; //13 
// 	char dst1[7] = "Hallo";  //5
// 	int size1 = sizeof(dst1);
// 	printf("Return Library: %zu\n", strlcat(dst1, src1, size1));
// 	printf("Dest lib: %s\n", dst1);
// }

// If size is 0, no modification to dst should occur, 
//just return the length of src
//123456789101112131415161718
//0123456789 101112131415161718
//Hallo und  T s c h u e s s \0

/*Return value
Returns the total length of the resulting string after concatenation. 
If the buffer size is insufficient to accommodate the entire result, 
it returns the required buffer size.*/
//
/*Upon successful completion, the strlcat() function shall 
return the initial length of the string (if any) pointed to by dst, 
as limited by dstsize, 
plus the length of the string pointed to by src; 
that is, the value that would be returned 
by strnlen(dst, dstsize) + strlen(src) before the strlcat() call.*/