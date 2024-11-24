/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:08:32 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/23 09:59:50 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*db;

	len = ft_strlen(s);
	i = 0;
	db = (char *)malloc((len + 1) * sizeof(char));
	if (db == NULL)
		return (NULL);
	while (s[i])
	{
		db[i] = s[i];
		i++;
	}
	db[i] = '\0';
	return (db);
}

//cc ft_strdup.c ft_strlen.c  && ./a.out 

// int main()
// {
// 	char *s = "Double me";

// 	char *db = ft_strdup(s);

// 	printf("Double	%s\n", db);
// 	printf("SRC	%s\n", s);

// 	free(db);
// }