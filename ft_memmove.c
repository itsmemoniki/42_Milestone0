
#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char	buffer[n];
// 	const void		*s;
// 	size_t			i;

// 	i = 0;
// 	while (i < n)
// 	{

// 	}

// }

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "hello how are you";
	memmove(str + 2, str, 4);
	printf("%s\n", str);
}