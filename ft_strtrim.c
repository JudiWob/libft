/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:15:09 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 13:07:10 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return ((char *)ft_calloc(1, sizeof(char)));
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// cc ft_strtrim.c ft_strchr.c   ft_strlen.c  ft_substr.c
// int	main(void)
// {
// 	char s1[] = "eaeebeecdddde";

// 	char set[] = "abce";

// 	char *trim = ft_strtrim(s1, set);

// 	printf("Trimmed: %s", trim);
// 	free(trim);
// }
