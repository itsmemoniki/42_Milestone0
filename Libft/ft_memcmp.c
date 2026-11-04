#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && i < n && str1[i] == str2[i])
	{
		i++;
	}
	return ((int)(str1[i] - str2[i]));
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char str1[] = "\0";
    char str2[] = "\0";

    int result = ft_memcmp(str1, str2, 1);
    if (result == 0){
        
        printf("Both memory blocks are equal\n");
    } else {
        printf("Memory blocks differ by %i\n", result);
    }
	return (0);
}