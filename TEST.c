/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TEST.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaselt <jpaselt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:54:47 by jpaselt           #+#    #+#             */
/*   Updated: 2024/11/19 18:00:36 by jpaselt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"
int main(void)
{
    // test strrchr function
    printf(BLUE"strrchr function\n" RESET);
    char *st1 = "Hello World!";
    char ch1 = 'o';
    strrchr(st1, ch1) == ft_strrchr(st1, ch1)
    ? printf(GREEN"result1: %s\nresult2: %s\n" RESET, ft_strrchr(st1,ch1), strrchr(st1,ch1))
    : printf(RED"result1: %s\nresult2: %s\n" RESET, ft_strrchr(st1,ch1), strrchr(st1,ch1));
    printf("\n");
    return (0);
}