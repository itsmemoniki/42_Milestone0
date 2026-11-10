#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;
	size_t	strsize;

	strsize = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc((strsize + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ptr = str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (str);
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