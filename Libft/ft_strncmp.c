/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:16:58 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:32:10 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
		i++;
	if (n == i)
		return (0);
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char* s1 = "abc";
//     char* s2 = "abcdef";

// 	int value = ft_strncmp(s1, s2, 6);
// 	printf("%i\n", value);
// 	return (0);
// }
