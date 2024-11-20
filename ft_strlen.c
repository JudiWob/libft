/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:48:40 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 16:25:54 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	// while (s[i++ + 1])
// 	// 	printf("%i", i);
// 	while (s[++i])
// 		//printf("%i\n", i);
// 	return (i);
// }


size_t	ft_strlen(const char *s)
{
	
	int	i;

	i = -1;
	while (s[i++ +1]) 
		;//printf("%i\n", i);
	return (i);
}

// int main()
// {
// 	printf("\n Ende: %zu", ft_strlen(""));
// }