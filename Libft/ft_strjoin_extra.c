#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strsize;

	strsize = ft_strlen(s1) + ft_strlen(s1);
	str = (char *) malloc((strsize + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - strsize);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char	str1[] = "Hello ";
// 	const char	str2[] = "World!";
// 	char	*newstr = ft_strjoin(str1, str2);
// 	printf("%s\n", newstr);
// 	return (0);
// }