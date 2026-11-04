#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		result;
	int		sign;

	ptr = (char *)nptr;
	if (!ptr)
		return (0);
	result = 0;
	while ((9 <= *ptr && *ptr <= 13) || *ptr == ' ')
		ptr++;
	while (*ptr && ('0' <= *ptr && *ptr <= '9'))
	{
		result = result * 10 + (*ptr++ - '0');
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*nbr = "\n a";
	printf("Number: %i\n", ft_atoi(nbr));
}