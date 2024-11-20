/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:44:51 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 10:55:50 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return((char *)(s + i)); //return 0
	return (NULL);
}

int main()
{
	char *str = "Hallo";

	char c = 'l';
	
	printf("s %s\n", ft_strchr(str, c));
	printf("c %c\n", *ft_strchr(str, c));
	printf("p %p", ft_strchr(str, c));
	
	char *ptr = ft_strchr(str, c);
	//ptr = NULL;
	
	// if (ptr == NULL) {
    //     printf("\nThe pointer is NULL.\n");
    // } else {
    //     printf("Pointer content: %d\n", *ptr);
    // }
}
