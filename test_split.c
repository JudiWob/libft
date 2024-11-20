/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:50:48 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/18 18:08:02 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_cpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (dst);
	while (--size)
		{
			dst[i] = src[size - i];
			i++;
		}
	dst[size] = '\0';
	return (dst); 
}

int main()
{
	char s[] = "This is a test";
	
	//char c = ' ';
	size_t size = 3;
	char *split = (char*)malloc((size + 1) * sizeof(char));
	split = ft_cpy(split, s, 4);

	printf("Count: %s", split);
	free(split);
} 