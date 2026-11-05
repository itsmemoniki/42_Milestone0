#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (n == i)
		return (0);
	return (((int)str1[i] - (int)str2[i]));
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char s[] = {'\x80', 0, 127, 0};
// 	char sCpy[] = {'\x80', 0, 127, 0};
// 	printf("%d\n", memcmp(s, sCpy, 4));
// 	return (0);
// }