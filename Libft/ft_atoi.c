#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		result;
	int		sign;

	ptr = (char *)nptr;
	if (!ptr)
		return (0);
	while ((9 <= *ptr && *ptr <= 13) || *ptr == ' ')
		ptr++;
	sign = 1;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign = sign * -1;
		ptr++;
	}
	result = 0;
	while ('0' <= *ptr && *ptr <= '9')
		result = result * 10 + (*ptr++ - '0');
	return (sign * result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*nbr = "\n +7786a";
// 	printf("Number: %i\n", ft_atoi(nbr));
// }