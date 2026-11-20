/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:17:57 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/20 15:41:17 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*trim(size_t start, size_t end, char *trimmed, char const *s1)
{
	size_t	i;

	i = 0;
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[start] && isin_set(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && isin_set(s1[end], set))
		end--;
	trimmed = (char *) malloc((end - start + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	trimmed = trim(start, end, trimmed, s1);
	return (trimmed);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *str = "123Hello 123World321";
// 	const char *set = "123";

// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
