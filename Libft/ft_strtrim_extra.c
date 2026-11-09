#include "libft.h"
#include <stdio.h>

int	isin_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

int	isin_set(char c, char *set)
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
	// size_t	end;
	size_t	len;

	start = 0;
	while (*s1 && isin_set(*s1, set))
	{
		start++;
		s1++;
	}
	printf("start: %zu\n", start);
	len = ft_strlen(s1) - 2 * ft_strlen(set);
	trimmed = (char *) malloc(len * sizeof(char));
	if (!trimmed)
		return (NULL);
	return (0);
}

int main(void)
{
	const char *set = "abcaa";
	const char *str = "abchowareyou";
	size_t	i = 0;

	while (i < ft_strlen(str))
	{
		printf("%i ", isin_set(*str, set));
		str++;
		i++;
	}
	printf("\n");
	ft_strtrim(str, set);
	return (0);
}