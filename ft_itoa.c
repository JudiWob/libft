/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:17:55 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/19 18:54:24 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *convert(int n, int len)
{
	char	*itoa;

	itoa = (char *)malloc((len + 1) * sizeof(char));
	itoa[len] = '\0';
	while (n != 0)
	{
		itoa[len - 1] = (n % 10) + 48;
		n = n/10;
		len--;
		printf("n: %d\n", n);
	}
	if (n < 0)
		itoa[0] = '-';
	
	return (itoa);
}

char *ft_itoa(int n) //422
{
	size_t	len;
	int 	num;
	char	*itoa;
	
	len = 0;
	num = n;
	while (num) //count len
	{
		len++;
		num = num/10;
	}
	if (n < 0)
		len++;
	itoa = convert(n, len);
	return (itoa);
}


int main()
{

	int n = 422;
	char *itoa = ft_itoa(n);

	printf("ITOA: %s", itoa);

	free (itoa);
}

