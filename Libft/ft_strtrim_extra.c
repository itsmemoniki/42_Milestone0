#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) - 2 * ft_strlen(set);
	str = (char *) malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	
}
