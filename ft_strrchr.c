/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:06:06 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/19 18:00:13 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int n;
	
	i = 0;
	while (s[i])
	{
		if(s[i] == c)
			n = i;
		i++;
	}
	if(c == '\0')
		return ((char *)s + i);
	if(s[n] == c)
		return ((char *)s + n);
	return(NULL);
	
}

// int main()
// {
// 	char *str = "Hallo";

// 	char c = '\0';
	
// 	printf("%s\n", ft_strrchr(str, c));

// 	char *ptr = ft_strrchr(str, c);
// 	//ptr = NULL;
	
// 	if (ptr == NULL)
//         printf("The pointer is NULL.\n");
//     	else
//         printf("Pointer content: %d\n", *ptr);
// }
