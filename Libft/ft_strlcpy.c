/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:12:51 by msouza-c          #+#    #+#             */
/*   Updated: 2026/10/30 18:01:10 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	if (dsize)
	{
		while (src[i] && i < dsize - 1)
		{
			*(dst + i) = *(src + i);
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

// #include <stdio.h>
// #include <string.h>
// // #include <bsd/string.h>
// int main(void)
// {
//     const char str1[] = "ola";
//     char dest1[15] = "hi";
//     const char str2[] = "ola";
//     char dest2[15] = "hi";
//     printf("%zu dest: %s\n", ft_strlcpy(dest1, str1, 5), dest1);
// 	printf("%zu dest: %s\n", strlcpy(dest2, str2, 5), dest2);
// }
