#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[j + i] == needle[j] && i + j < len && 
			haystack[i + j] && needle[j])
		{
			j++;
			if (!needle[j])
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *largestring = "Foo Bar Baz";
// 	char *smallstring = "Bar";
// 	char *ptr;

// 	ptr = strnstr(largestring, smallstring, 7);
// 	printf("%s\n", ptr);
// 	return (0);
// }