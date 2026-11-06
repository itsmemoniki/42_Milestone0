#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	len;

	len = ft_strlen(s1) - 2 * ft_strlen(set);
	trimmed = (char *) malloc(len * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (*set)
		s1++;
	while (*s1)
		*trimmed++ = *s1++;
	return (trimmed);
	
}

#include <stdio.h>
int main(void)
{
	return (0);
}