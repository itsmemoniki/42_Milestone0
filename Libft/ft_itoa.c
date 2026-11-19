/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:07:42 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/19 15:04:38 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	long_abs(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static size_t	count_digits(long n)
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

static char	*make_str(char *str, long n)
{
	size_t	size;
	long	nbr;

	nbr = long_abs(n);
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

// #include <stdio.h>
// int	main(void)
// {
// 	long n = -2147483648;
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
