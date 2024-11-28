/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:07:07 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 10:44:30 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	if (big[0] == '\0')
		return (NULL);
	if (len == (size_t)-1)
		len = ((size_t) - 1);
	while (i < len && big[i])
	{
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char little[] = "fsb";

// 	char big[] = "Wolfsburg";

// 	size_t len = 9;

// 	char *ptr = ft_strnstr(big, little, len);

// 	printf("Ptr: %s", ptr);

// }
