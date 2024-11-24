/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:23:02 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 11:40:06 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		*ptr_d;

	ptr_s = (const unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			ptr_d[n] = ptr_s[n];
	return (dest);
}

// cc ft_memmove.c -Wall -Wextra -Werror && ./a.out
// int	main(void)
// {
// 	char src[] = "";
// 	char src1[] = "";

// 	ft_memmove(src, src, 0);
// 	memmove(src1, src1, 0);

// 	printf("FT: %s\n", src);
// 	printf("LB: %s\n", src1);
// }