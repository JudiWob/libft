/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:48:14 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/20 15:00:18 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c);
int		count_len(const char *s, char c);
void	cpy(char *charr, const char *s, size_t len);
char	**ft_split(char const *s, char c);
char	*make_space(char *charr, int len);

int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	count_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

void	cpy(char *charr, const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		charr[i] = s[i];
		i++;
	}
	charr[i] = '\0';
}

char	*make_space(char *charr, int len)
{
	charr = (char *)malloc((len + 1) * sizeof(char));
	if (!charr)
		return (NULL);
	return (charr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	**charr;

	charr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	j = 0;
	len = 0;
	
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			len = count_len(s + i, c);
			charr[j] = make_space(charr[j], len);
			cpy(charr[j], s + i, len);
			j++;
		}
		i++;
	}
	charr[j] = NULL;
	return (charr);
}

int main()
{
	char	s[] = "word";

	char	c = ' ';

	char	**split = ft_split(s, c);
	int		j = 0;
	while (j < 6)
	{
		printf("Word: %s\n", split[j]);
		j++;
	}
}
//
//static!!