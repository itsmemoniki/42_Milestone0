#include "libft.h"

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
	size_t	len;

	len = ft_strlen(s1) - 2 * ft_strlen(set);
	trimmed = (char *) malloc(len * sizeof(char));
	if (!trimmed)
		return (NULL);
}

#include <stdio.h>
int main(void)
{
	char c = 'a';
	char *str = "helloooo l how are you     ola";
	printf("%i\n", isin_set(c, str));
	return (0);
}