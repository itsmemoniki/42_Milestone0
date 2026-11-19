/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:17:57 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/19 15:02:40 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && isin_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && isin_set(s1[end], set))
		end--;
	trimmed = (char *) malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *set = "abaaou";
// 	const char *str = "abchowareyou";

// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
