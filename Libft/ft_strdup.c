#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s) + 1;
	dup = (char *)malloc(s_len * sizeof(char));
	if (!dup)
		return (NULL);
	while (*s)
		*dup++ = *s++;
	*dup = '\0';
	return (dup);
}

#include <stdio.h>
int main(void)
{
	return (0);
}