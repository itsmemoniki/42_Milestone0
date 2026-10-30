
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t i;

	i = 0;
	s = (unsigned char*)src;
	d = dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);

}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char list[] = "hello";
// 	char dest[6];
// 	ft_memcpy(dest, list, 6);
// 	printf("%s\n", dest);
// }