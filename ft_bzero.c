/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:46:31 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 16:24:36 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int	main()
{
	char str[10];

	int n = 10;
	int i = 0;

	ft_bzero(str,n);
	//ft_bzero(str,n * sizeof(int));

	while (i < 10)
	{
		printf("%d\n", str[i]);
		i++;
	}
}