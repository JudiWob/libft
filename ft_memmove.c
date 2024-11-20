/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:23:02 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/18 14:17:45 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		*ptr_d;
	size_t 				i;
	
	ptr_s = (const unsigned char *) src;
	ptr_d = (unsigned char *) dest;
	i = 0;
	if(src > dest)
		ft_memcpy(dest, src, n);
	else
 		while (n--)
			ptr_d[n] = ptr_s[n];
	return (dest);
}

//cc ft_memmove.c -Wall -Wextra -Werror && ./a.out
 int main()
 {
	char src[] = "Eine Gute Idee";
	char src1[] = "Eine Gute Idee";

	ft_memmove(src , src + 2, 4);
	memmove(src1 , src1 + 2, 4);

	printf("FT: %s\n", src);
	printf("LB: %s\n", src1);
 }