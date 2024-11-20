/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:54:25 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/12 12:20:43 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main(void)
// {
// // 	int n = 5;
// // 	char str[10] = "Helloooooo";
// // 	int c = 97;

// // 	ft_memset(str, c, n);
// // 	//str[n] = '\0';
// // 	printf("%s", str);

// // 	printf("\nLib:");
// // 	memset(str, c, n);
// // 	printf("\n%s\n", str);

// // }
// 	int n = 3;
// 	int arr[] = {1, 2, 3, 5, 12};
// 	int c = 0;

// 	ft_memset(arr, c, n * sizeof(int));

// 	int i = ;
// 	while (i < 5)
// 	{
// 		printf("%i\n", arr[i]);
// 		i++;
// 	}
// }
