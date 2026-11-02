#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "Hello world";
// 	char *ptr = ft_strchr(str, 'd');

// 	printf("string original: %s\n", str);
// 	if (ptr != NULL)
//         printf("Character found at position: %s\n", ptr);
//     else
//         printf("Character not found\n");
//     return 0;
// }