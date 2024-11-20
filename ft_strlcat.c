/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:56:09 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 16:25:46 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	size_t i; 
	size_t n;
	size_t dst_len;
	
	dst_len = ft_strlen(dst);

	if (size < (ft_strlen(src) + dst_len))
	{
		//printf("Return: %zu\n", ft_strlen(src) + dst_len);
		return (ft_strlen(src) + dst_len);
	}	

	i = 0;
	n = dst_len; 
	while (src[i] && n < size )
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[n + i] = '\0';

	//printf("Return: %zu\n", ft_strlen(src) + dst_len);
	return (ft_strlen(src) + dst_len);
}

int main()
{
	char *src = " und Tschuesssss"; //13 
	char dst[7] = "Hallo";  //5
	int size = sizeof(dst);
	printf("Return ft: %zu\n", ft_strlcat(dst, src, size));
	printf("Dest ft: %s\n", dst);
	//Hallo und Tschuessssss

	char *src1 = " und Tschuesssss"; //13 
	char dst1[7] = "Hallo";  //5
	int size1 = sizeof(dst1);
	printf("Return Library: %zu\n", strlcat(dst1, src1, size1));
	printf("Dest lib: %s\n", dst1);
}

//123456789101112131415161718
//0123456789 101112131415161718
//Hallo und  T s c h u e s s \0


/*Return value
Returns the total length of the resulting string after concatenation. 
If the buffer size is insufficient to accommodate the entire result, 
it returns the required buffer size.*/



/*Upon successful completion, the strlcat() function shall 
return the initial length of the string (if any) pointed to by dst, 
as limited by dstsize, 
plus the length of the string pointed to by src; 
that is, the value that would be returned 
by strnlen(dst, dstsize) + strlen(src) before the strlcat() call.*/