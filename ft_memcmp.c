/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:07:20 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/17 16:25:24 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t i;
	
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
	
}

int main()
{
	int arr1[] = {1, 3, 4};
	int arr2[] = {1, 3};
	
	if(ft_memcmp(arr1, arr2, 3 * sizeof(int)) == 0)
		printf("same int");
	else
		printf("not same int");
	return 0;

	char arr1[] = {1, 3, 4};
	int arr2[] = {1, 3};
	
}

/*Memory Representation: memcmp compares the raw bytes of the two arrays. 
This means that memcmp does not care about the data type (e.g., int, char, etc.).
It simply compares the byte sequences. So, when using memcmp to compare int arrays, 
it will compare the byte-level representation of the int values, 
not the values themselves directly.*/