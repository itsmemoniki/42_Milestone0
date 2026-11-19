/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_extra.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:15:49 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:29:31 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	size_t	strsize;

	strsize = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc((strsize + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ptr = str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char	str1[] = "Hello ";
// 	const char	str2[] = "World!";
// 	char	*newstr = ft_strjoin(str1, str2);
// 	printf("%s\n", newstr);
// 	return (0);
// }
