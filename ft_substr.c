/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:09:45 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 13:16:25 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	if (start >= len_s)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (start + len > len_s)
		len = len_s - start;
	ss = (char *)malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

// int	main(void)
// {
// 	//char	*s;
// 	size_t	len;
// 	int		start;
// 	char	*ss;

// 	//s = "Aufwiedersehen";
// 	char * s = ft_substr("tripouille", 0, 42000);
// 	len = 14;
// 	start = 14;
// 	ss = ft_substr(s, start, len);
// 	printf("SS: %s", ss);
// 	free(ss);
// }
// If start is greater than or equal to the length of the string, 
// return an empty string
// Adjust len if it exceeds the remaining characters in the string
/*Returns the substring of the given string 
at the given start position with the given length 
(or smaller if the length of the original string is less than start + length, 
or length is bigger than MAXSTRINGLEN).*/