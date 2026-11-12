#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	ptr = (char *) malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] =  f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	test_uppercase(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// #include <stdio.h>
// int	main(void)
// {
// 	char const	*str = "hello";
// 	printf("%s\n", ft_strmapi(str, test_uppercase));
// 	return (0);
// }