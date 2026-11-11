#include "libft.h"
#include <stdio.h>

size_t	count_digits(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*make_str(char *str, long n)
{
	size_t	size;
	long	nbr;

	nbr = labs(n);
	size = count_digits(n);
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';	
	while (size)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	ln;

	ln = (long)n;
	str = (char *) malloc((count_digits(ln) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = make_str(str, ln);
	return (str);
}

// int	main(void)
// {
// 	long n = -2147483648;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }