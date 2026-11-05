#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstLen;
	size_t srcLen;
	size_t	i;

	dstLen = 0;
	srcLen = ft_strlen(src);
	while (dstLen < size && dst[dstLen])
		dstLen++;
	if (size > dstLen)
	{
		i = dstLen;
		while (i < (size - 1) && *src)
		{
			*(dst + i) = *src++;
			i++;
		}
		dst[i] = '\0';
		return (dstLen + srcLen);
	}
	else
		return (size + srcLen);
}

// #include <stdio.h>
// //#include <bsd/string.h>
// #include <string.h>
// int main(void)
// {
// 	char dest1[100] = "Hello ";
// 	char src1[] = "World!";
// 	char dest2[100] = "Hello ";
// 	char src2[] = "World!";

// 	printf("%zu dest: %s\n", ft_strlcat(dest1, src1, 2), dest1);
// 	printf("%zu dest: %s\n", strlcat(dest2, src2, 2), dest2);
// }