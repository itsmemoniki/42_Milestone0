#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    return (ft_strlen(dst) + ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char dest[20] = "Hello ";
    char src[] = "World!";

    printf("%zu dest: %s\n", strlcat(dest, src, 15), dest);
}