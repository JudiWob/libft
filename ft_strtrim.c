/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:04:17 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/19 18:55:19 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	t;
	size_t	count;
	char*	trim;

	i = 0;
	j = 0;
	t = 0;
	count = 0;
	if (!s1 || !set)
        return (NULL);
	while (s1[i])//count
	{
		while (set[j])
		{
			if(s1[i] == set[j])
				count++;
			j++;
		}
		i++;
		j = 0;
	}
	trim = (char*)malloc((ft_strlen(s1) - count + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (s1[i]) //s[i] = e
	{
		while (set[j]) 
		{
			if(s1[i] == set[j])
				i++;
			j++;
		}
		trim[t] = s1[i];
		i++;
		t++;
		j = 0;
	}
	trim[t] = '\0';
	return (trim);
}

int main()
{
	char s1[] = "eabcde";
	
	char set[] = "ace";

	char *trim = ft_strtrim(s1, set);

	printf("Trimmed: %s", trim);
	free(trim);
}