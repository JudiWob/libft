/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:05 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 16:25:50 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ft_strlen(src); 
}

int main()
{
	char src[] = "Hello";
	
	char dst[4] ;

	int size = sizeof(dst);

	//strlcpy(dst, src, size); //GIBT ES NICHT!!!!
	ft_strlcpy(dst, src, size);

	printf("dst: %s", dst);
	
}