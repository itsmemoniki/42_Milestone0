/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:16:05 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:31:09 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size > dst_len)
	{
		i = dst_len;
		while (i < (size - 1) && *src)
		{
			*(dst + i) = *src++;
			i++;
		}
		dst[i] = '\0';
		return (dst_len + src_len);
	}
	else
		return (size + src_len);
}

// #include <stdio.h>
// //#include <bsd/string.h>
// #include <string.h>
// int main(void)
// {
// 	char dest1[100] = "Hello ";
// 	char src1[] = "World!";
// 	char dest2[100] = "Hello ";
// 	char src2[] = "World!";

// 	printf("%zu dest: %s\n", ft_strlcat(dest1, src1, 2), dest1);
// 	printf("%zu dest: %s\n", strlcat(dest2, src2, 2), dest2);
// }
