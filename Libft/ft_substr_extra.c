#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	coord;
	size_t	i;

	if (!s)
		return (NULL);
	subs = (char *) malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	coord = start + len;
	i = 0;
	while (s[start] && start < (coord))
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *str = "Hello monki bla bla!";
// 	char *subs = ft_substr(str, 6, 5);
// 	printf("%s\n", subs);
// 	return (0);
// }