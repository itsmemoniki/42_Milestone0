/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:17:34 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:17:36 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str[] = "bello world haha bhat? did you say?";
//     char chr = 'b';
//     char* ptr = ft_strrchr(str, chr);

//     if (ptr) {
//         printf("Pointer is %s\n", ptr);
//     }
//     else {
//         printf("%c is not present in %s \n", chr, str);
//     }
// 	return (0);
// }
