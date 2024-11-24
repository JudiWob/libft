/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:48:40 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/23 10:17:45 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = -1;
	while (s[i++ +1])
		;
	return (i);
}

// int main()
// {
// 	printf("\n Ende: %zu", ft_strlen(""));
// }
//
// size_t	ft_strlen(const char *s)
// {
// 	int	i;
//
// 	i = 0;
// 	// while (s[i++ + 1])
// 	// 	printf("%i", i);
// 	while (s[++i])
// 		//printf("%i\n", i);
// 	return (i);
// }