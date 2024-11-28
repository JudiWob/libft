/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:49:40 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/24 09:03:54 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (10 * result) + (nptr[i] - 48);
		i++;
	}
	return (sign * result);
}

// int main()
// {
// 	char nptr[] = "  +0123aaa";
// 	printf("LB Nptr %i\n", atoi(nptr));
// 	printf("My Nptr %d", ft_atoi(nptr));
// }
// if (result > INT_MAX || result < INT_MIN)
// 	{
// 		if (sign == -1)
// 			return (INT_MIN);
// 		else
// 			return (INT_MAX);
// 	}