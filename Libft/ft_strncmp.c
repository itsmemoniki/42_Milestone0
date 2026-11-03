#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *s1)
	{	
		if (*s1 == *s2)
		{
			i++;
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}

	}
	return (*s1 - *s2);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	char* s1 = "Moniki is me";
    char* s2 = "Monikiisme";

	int value = strncmp(s1, s2, 7);
	printf("%i\n", value);
	return (0);
}