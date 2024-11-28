/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:49:29 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/22 18:22:15 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <malloc.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * (size));
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * (size));
	return (ptr);
}

//cc ft_calloc.c ft_memset.c  && ./a.out

// int main()
// {
// 	int *arr = NULL;

// 	size_t nmemb;
// 	size_t size;

// 	nmemb = 5;
// 	size = sizeof(int);

// 	arr = (int *)ft_calloc(nmemb, size);

// 	if (arr == NULL) 
// 	{
//         // Memory allocation failed
//         printf("Memory allocation failed\n");
//         return 1;
//     }

// 	//size_t actual_size = malloc_usable_size(arr);

// 	printf("Size of pointer %li == 64 bit system\n", sizeof(arr));
// 	//printf("Size of array %li bits", actual_size);

// 	free(arr);
// }