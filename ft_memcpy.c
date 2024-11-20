/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:22:04 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/18 15:31:07 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	
	unsigned char	*ptr_s;
	unsigned char	*ptr_d;

	ptr_s = (unsigned char *) src;
	ptr_d = (unsigned char *) dest;
	while (n--)
		*ptr_d++ = *ptr_s++;
	return dest;
}

int main()
{
	char src[] 	= "Eine Gute Idee";
	char src1[] = "Eine Gute Idee";
	char src2[] = "Eine Gute Idee";

	//ft_memcpy(src , src + 2, 4);
	printf("FT:	%s\n", (char *) ft_memcpy(src , src + 2, 4));
	printf("CPY:	%s\n", (char *) memcpy(src1 , src1 + 2, 4));
	printf("MOVE:	%s\n", (char *) memmove(src2 , src2 + 2, 4));
}

// solved by Judith Paselt
// unsigned char	*ptr_s;
// unsigned char	*ptr_d;
// size_t			i;

// i = 0;
// ptr_s = (unsigned char *) src;
// ptr_d = (unsigned char *) dest;
// while (i < n)
// {
// 	ptr_d[i] = ptr_s[i];
// 	i++;
// }




// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
	
// 	unsigned char	*ptr_s;
// 	unsigned char	*ptr_d;
// 	size_t			i;

// 	i = 0;
// 	ptr_s = (unsigned char *) src;
// 	ptr_d = (unsigned char *) dest;
// 	while (i < n)
// 	{
// 		ptr_d[i] = ptr_s[i];
// 		i++;
// 	}
// 	printf("Dest_orig at end of function: %s\n", dest);
// 	return(dest);
// }
